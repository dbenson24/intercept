#include "controller.hpp"
#include "invoker.hpp"
#include "loader.hpp"
#include "extensions.hpp"

#include <regex>
#include <chrono>

#ifdef _DEBUG
#define DEBUG_DISPATCH(x, y) { std::string empty; _debug_display->call(x, arguments(y), empty); }
#else
#define DEBUG_DISPATCH(x, y)
#endif

namespace intercept {
    controller::controller() : threaded_dispatcher() {
        _initiated = false;
		add("init", std::bind(&intercept::controller::init, this, std::placeholders::_1, std::placeholders::_2));
        add("reset", std::bind(&intercept::controller::reset, this, std::placeholders::_1, std::placeholders::_2));
        add("ready", std::bind(&intercept::controller::get_ready, this, std::placeholders::_1, std::placeholders::_2));
		add("stop", std::bind(&controller::do_stop, this, std::placeholders::_1, std::placeholders::_2));
        add("export_ptr_list", std::bind(&controller::export_ptr_list, this, std::placeholders::_1, std::placeholders::_2));
        // action results
        add("fetch_result", std::bind(&intercept::controller::fetch_result, this, std::placeholders::_1, std::placeholders::_2));
    }
    controller::~controller() { }

	bool controller::init(const arguments &args_, std::string & result_) {
		if (!_initiated) {
            loader::get().attach_controller();
            invoker::get().attach_controller();
            extensions::get().attach_controller();
            result_ = "1";
			_initiated = true;
		}
		return true;
	}

    bool controller::get_ready(const arguments &args_, std::string & result_) {
        result_ = "0";

        if (!_ready)
            result_ = "-1";

        return true;
    }

    bool controller::reset(const arguments &args_, std::string & result_) {
        _ready = false;


        { 
            std::lock_guard<std::mutex> lock_results(_results_lock);

            while (!_results.empty()) {
                _results.pop();
            }

            while (!_messages.empty()) {
                _messages.pop();
            }
        }

        _ready = true;

        return true;
    }

    bool controller::fetch_result(const arguments &args_, std::string & result_) {
        result_ = "";
        if (_results.size() > 0) {
            std::lock_guard<std::mutex> _lock(_results_lock);
            dispatch_result res = _results.front();
			std::stringstream ss;
			ss << "[" << res.id << ",[" << res.message << "]]";
            result_ = ss.str();
            _results.pop();
        }
        return true;
    }

    bool controller::export_ptr_list(const arguments &args_, std::string & result_) {
        std::ofstream pointers("sqf_pointers.hpp");
        std::ofstream assignments("sqf_assignments.hpp");
        pointers << "//Exported Pointer Definitions For: " << args_.as_string(0) << "\n\n";
        assignments << "//Exported Pointer Assignments For: " << args_.as_string(0) << "\n\n";

        pointers << "\n// Unary Functions\n";
        assignments << "\n// Unary Functions\n";

        auto unary_list = loader::get().unary();
        std::list<std::string> sorted_unary_list;
        for (auto unary : unary_list) {
            sorted_unary_list.push_back(unary.first);
        };
        sorted_unary_list.sort();

        std::ofstream simple_unary("sqf_simple_unary.hpp");
        std::ofstream complex_unary("sqf_complex_unary.hpp");

        std::set<std::string> unary_macros;

        for (auto unary_entry : sorted_unary_list) {
            std::string op_name = unary_entry;
            std::regex name_test = std::regex("[a-z]+?.*");
            if (std::regex_match(op_name, name_test)) {
                for (auto op : unary_list[unary_entry]) {
                    std::string arg_types = op.op->arg_type.type_str();
                    std::transform(arg_types.begin(), arg_types.end(), arg_types.begin(), ::tolower);
                    std::string return_type = op.op->return_type.type_str();
                    std::transform(return_type.begin(), return_type.end(), return_type.begin(), ::tolower);
                    std::string first_arg_type = *op.op->arg_type.type().begin();
                    std::string pointer_name = "unary__" + op_name + "__" + arg_types + "__ret__" + return_type;
                    pointers << "unary_function " << pointer_name << ";\n";
                    //__sqf::unary_random_scalar_raw = (unary_function)functions.get_unary_function_typed("random", "SCALAR");
                    assignments << "__sqf::" << pointer_name << " = " << "(unary_function)functions.get_unary_function_typed(\"" << op_name << "\", \"" << first_arg_type << "\");\n";

                    std::string pretty_name(op.name);
                    std::regex to_snake = std::regex("([a-z])([A-Z0-9])");
                    std::string snake_name = std::regex_replace(pretty_name, to_snake, "$1_$2");
                    std::transform(snake_name.begin(), snake_name.end(), snake_name.begin(), ::tolower);

                    std::regex spaces_regex = std::regex("[^a-zA-Z0-9]");
                    std::string arg_name;
                    if ((uintptr_t)op.arg_name > 256) {
                        arg_name = std::string(op.arg_name);
                    }
                    else {
                        arg_name = "arg";
                    }
                    std::string snake_arg = std::regex_replace(arg_name, to_snake, "$1_$2");
                    snake_arg = std::regex_replace(snake_arg, spaces_regex, "$1_$2");
                    std::transform(snake_arg.begin(), snake_arg.end(), snake_arg.begin(), ::tolower);
                    snake_arg += "_";

                    if (!op.op->return_type.type().count("ARRAY") && 
                        (op.op->arg_type.type().size() == 1 || op.op->arg_type.type().count("NaN")) && 
                        !op.op->arg_type.type().count("ARRAY")
                        ) 
                    {
                        std::string return_type = *op.op->return_type.type().begin();
                        if (return_type == "NaN")
                            return_type = "SCALAR";

                        std::string arg_type = *op.op->arg_type.type().begin();
                        if (arg_type == "NaN")
                            arg_type = "SCALAR";

                        std::string macro_name = "SIMPLE_UNARY_FUNC_" + return_type + "_" + arg_type;
                        unary_macros.insert(macro_name);
                        macro_name += "(__sqf::" + pointer_name + ", " + snake_name + ", " + snake_arg + ")";
                        simple_unary << macro_name << "\n";
                    }
                    else {
                        for (auto arg_type : op.op->arg_type.type()) {
                            std::transform(arg_type.begin(), arg_type.end(), arg_type.begin(), ::tolower);
                            if (arg_type == "string") {
                                arg_type = "std::string";
                            }
                            else if(arg_type == "scalar") {
                                arg_type = "float";
                            }
                            complex_unary << "// ptr: __sqf::" << pointer_name << "\n";
                            complex_unary << return_type << " " << snake_name << "(" + arg_type + " " + snake_arg + ");\n\n";
                        }
                    }
                    
                }
            }
        }

        simple_unary << "\n\n/*\n";
        for (auto macro : unary_macros) {
            simple_unary << "#define " << macro << "(ptr, fnc, var)\n";
        }
        simple_unary << "*/";

        pointers << "\n// Binary Functions\n";
        assignments << "\n// Binary Functions\n";

        auto binary_list = loader::get().binary();
        std::list<std::string> sorted_binary_list;
        for (auto binary : binary_list) {
            sorted_binary_list.push_back(binary.first);
        };
        sorted_binary_list.sort();

        std::ofstream simple_binary("sqf_simple_binary.hpp");
        std::ofstream complex_binary("sqf_complex_binary.hpp");

        std::set<std::string> binary_macros;

        for (auto binary_entry : sorted_binary_list) {
            std::string op_name = binary_entry;
            std::regex name_test = std::regex("[a-z]+?.*");
            if (std::regex_match(op_name, name_test)) {
                for (auto op : binary_list[binary_entry]) {
                    std::string arg1_types = op.op->arg1_type.type_str();
                    std::transform(arg1_types.begin(), arg1_types.end(), arg1_types.begin(), ::tolower);
                    std::string arg2_types = op.op->arg2_type.type_str();
                    std::transform(arg2_types.begin(), arg2_types.end(), arg2_types.begin(), ::tolower);

                    std::string return_type = op.op->return_type.type_str();
                    std::transform(return_type.begin(), return_type.end(), return_type.begin(), ::tolower);

                    std::string first_arg1_type = *op.op->arg1_type.type().begin();
                    std::string first_arg2_type = *op.op->arg2_type.type().begin();

                    std::string pointer_name = "binary__" + op_name + "__" + arg1_types + "__" + arg2_types + "__ret__" + return_type;
                    pointers << "binary_function " << pointer_name << ";\n";

                    assignments << "__sqf::" << pointer_name << " = " << "(binary_function)functions.get_binary_function_typed(\"" << op_name << 
                        "\", \"" << first_arg1_type << "\", \"" << first_arg2_type << "\");\n";

                    std::string pretty_name(op.name);
                    std::regex to_snake = std::regex("([a-z])([A-Z0-9])");
                    std::string snake_name = std::regex_replace(pretty_name, to_snake, "$1_$2");
                    std::transform(snake_name.begin(), snake_name.end(), snake_name.begin(), ::tolower);

                    std::regex spaces_regex = std::regex("[^a-zA-Z0-9]");
                    std::string arg1_name;
                    if ((uintptr_t)op.left_arg_name > 256) {
                        arg1_name = std::string(op.left_arg_name);
                    }
                    else {
                        arg1_name = "arg1";
                    }
                    std::string snake_arg1 = std::regex_replace(arg1_name, to_snake, "$1_$2");
                    snake_arg1 = std::regex_replace(snake_arg1, spaces_regex, "$1_$2");
                    std::transform(snake_arg1.begin(), snake_arg1.end(), snake_arg1.begin(), ::tolower);
                    snake_arg1 += "_";

                    std::string arg2_name;
                    if ((uintptr_t)op.right_arg_name > 256) {
                        arg2_name = std::string(op.right_arg_name);
                    }
                    else {
                        arg2_name = "arg2";
                    }
                    std::string snake_arg2 = std::regex_replace(arg2_name, to_snake, "$1_$2");
                    snake_arg2 = std::regex_replace(snake_arg2, spaces_regex, "$1_$2");
                    std::transform(snake_arg2.begin(), snake_arg2.end(), snake_arg2.begin(), ::tolower);
                    snake_arg2 += "_";

                    if (!op.op->return_type.type().count("ARRAY") &&
                        ((op.op->arg1_type.type().size() == 1 || op.op->arg1_type.type().count("NaN")) &&
                        !op.op->arg1_type.type().count("ARRAY")) &&
                        ((op.op->arg2_type.type().size() == 1 || op.op->arg2_type.type().count("NaN")) &&
                            !op.op->arg2_type.type().count("ARRAY"))
                        )
                    {
                        std::string return_type = *op.op->return_type.type().begin();
                        if (return_type == "NaN")
                            return_type = "SCALAR";

                        std::string arg1_type = *op.op->arg1_type.type().begin();
                        if (arg1_type == "NaN")
                            arg1_type = "SCALAR";

                        std::string arg2_type = *op.op->arg2_type.type().begin();
                        if (arg2_type == "NaN")
                            arg2_type = "SCALAR";


                        std::string macro_name = "SIMPLE_BINARY_FUNC_" + return_type + "_" + arg1_type + "_" + arg2_type;
                        binary_macros.insert(macro_name);
                        macro_name += "(__sqf::" + pointer_name + ", " + snake_name + ", " + snake_arg1 + ", " + snake_arg2 + ")";
                        simple_binary << macro_name << "\n";
                    }
                    else {
                        for (auto arg1_type : op.op->arg1_type.type()) {
                            std::transform(arg1_type.begin(), arg1_type.end(), arg1_type.begin(), ::tolower);
                            if (arg1_type == "string") {
                                arg1_type = "std::string";
                            }
                            else if (arg1_type == "scalar") {
                                arg1_type = "float";
                            }
                            for (auto arg2_type : op.op->arg2_type.type()) {
                                std::transform(arg2_type.begin(), arg2_type.end(), arg2_type.begin(), ::tolower);
                                if (arg2_type == "string") {
                                    arg2_type = "std::string";
                                }
                                else if (arg2_type == "scalar") {
                                    arg2_type = "float";
                                }
                                complex_binary << "// ptr: __sqf::" << pointer_name << "\n";
                                complex_binary << return_type << " " << snake_name << "(" + arg1_type + " " + snake_arg1 + ", " + arg2_type + " " + snake_arg2 + ");\n\n";
                            }
                        }
                    }
                }
            }
        }

        simple_binary << "\n\n/*\n";
        for (auto macro : binary_macros) {
            simple_binary << "#define " << macro << "(ptr, fnc, arg1, arg2)\n";
        }
        simple_binary << "*/";

        pointers << "\n// Nular Functions\n";
        assignments << "\n// Nular Functions\n";

        auto nular_list = loader::get().nular();
        std::list<std::string> sorted_nular_list;
        for (auto nular : nular_list) {
            sorted_nular_list.push_back(nular.first);
        };
        sorted_nular_list.sort();

        std::ofstream simple_nulars("sqf_simple_nular.hpp");
        std::ofstream complex_nulars("sqf_complex_nular.hpp");

        std::set<std::string> nular_macros;
        for (auto nular_entry : sorted_nular_list) {
            std::string op_name = nular_entry;
            std::regex name_test = std::regex("[a-z]+?.*");
            if (std::regex_match(op_name, name_test)) {
                for (auto op : nular_list[nular_entry]) {
                    std::string return_type = op.op->return_type.type_str();
                    std::transform(return_type.begin(), return_type.end(), return_type.begin(), ::tolower);
                    std::string pointer_name = "nular__" + op_name + "__ret__" + return_type;
                    pointers << "nular_function " << pointer_name << ";\n";
                    assignments << "__sqf::" << pointer_name << " = " << "(nular_function)functions.get_nular_function(\"" << op_name << "\");\n";

                    std::string pretty_name(op.name);
                    std::regex to_snake = std::regex("([a-z])([A-Z0-9])");
                    std::string snake_name = std::regex_replace(pretty_name, to_snake, "$1_$2");
                    std::transform(snake_name.begin(), snake_name.end(), snake_name.begin(), ::tolower);

                    if (op.op->return_type.type_str() != "ARRAY" && op.op->return_type.type_str() != "NetObject") {
                        
                        if (pretty_name == "true" || pretty_name == "false")
                            continue;
                        
                        
                        std::string macro_name = "SIMPLE_NULAR_FUNC_" + op.op->return_type.type_str();
                        nular_macros.insert(macro_name);
                        macro_name += "(__sqf::" + pointer_name + ", " + snake_name + ")";
                        simple_nulars << macro_name << "\n";
                    }
                    else {
                        if (pretty_name == "true" || pretty_name == "false")
                            continue;
                        complex_nulars << "// ptr: __sqf::" << pointer_name << "\n";
                        complex_nulars << return_type << " " << snake_name << "();\n\n";
                    }
                }
            }
        }

        simple_nulars << "\n\n/*\n";
        for (auto macro : nular_macros) {
            simple_nulars << "#define " << macro << "(ptr, fnc)\n";
        }
        simple_nulars << "*/";
        ExitProcess(0);
        return true;
    }
}

