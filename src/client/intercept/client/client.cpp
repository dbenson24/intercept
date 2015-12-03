#include "client.hpp"
#include "pointers.hpp"
#include "client_types.hpp"
#include <vector>

intercept::client_functions functions;
using namespace intercept::rv_types;
namespace intercept {
    namespace client {
        
        void __initialize();

        // Using __cdecl to prevent name mangling and provide better backwards compatibility
        void __cdecl assign_functions(const struct intercept::client_functions funcs) {
            functions = funcs;
            __initialize();
        }
    }

    namespace sqf {

        float random(float max_) {
            game_value max = functions.new_scalar(max_);
            game_value rand_val = functions.invoke_raw_unary(client::__sqf::unary__random__scalar_nan__ret__scalar_nan, &max);
            functions.free_value(&max);
            float rand = ((game_data_number *)rand_val.data)->number;
            functions.free_value(&rand_val);
            return rand;
        }

        object player() {
            game_value player_obj = functions.invoke_raw_nular(client::__sqf::nular__player__ret__object);
            return std::make_shared<object_ptr>(player_obj);
        }

        void side_chat(object obj_, const std::string &message_) {
            game_value message = functions.new_string(message_.c_str());
            functions.invoke_raw_binary(client::__sqf::binary__sidechat__object_array__string__ret__nothing, &obj_->rv_obj, &message);
            functions.free_value(&message);
        }

        
        bool line_intersects(vector3_base<float> beginPosition_, vector3_base<float> endPosition_) {
            STACK_3DARRAY(beginPos, beginPosition_);
            STACK_3DARRAY(endPos, endPosition_);

            game_value array_input = functions.new_array(size_t(2));
            ((game_data_array *)array_input.data)[0] = (game_data_array &)beginPos;
            ((game_data_array *)array_input.data)[1] = (game_data_array &)endPos;

            game_value intersects_value = functions.invoke_raw_unary(client::__sqf::unary__lineintersects__array__ret__bool, &array_input);
            bool intersects = ((game_data_bool *)intersects_value.data)->val;
            functions.free_value(&intersects_value);
            functions.free_value(&array_input);
            return intersects;
        }

        bool line_intersects(vector3_base<float> beginPosition_, vector3_base<float> endPosition_, const object& ignore_obj_one_) {
            STACK_3DARRAY(beginPos, beginPosition_);
            STACK_3DARRAY(endPos, endPosition_);

            game_value array_input = functions.new_array(size_t(3));
            ((game_data_array *)array_input.data)[0] = (game_data_array &)beginPos;
            ((game_data_array *)array_input.data)[1] = (game_data_array &)endPos;
            ((game_data_object *)array_input.data)[2] = (game_data_object &)(ignore_obj_one_->rv_obj.data);

            game_value intersects_value = functions.invoke_raw_unary(client::__sqf::unary__lineintersects__array__ret__bool, &array_input);
            bool intersects = ((game_data_bool *)intersects_value.data)->val;
            functions.free_value(&intersects_value);
            functions.free_value(&array_input);
            return intersects;
        }

        bool line_intersects(vector3_base<float> beginPosition_, vector3_base<float> endPosition_, const object& ignore_obj_one_, const object& ignore_obj_two_) {            
            STACK_3DARRAY(beginPos, beginPosition_);
            STACK_3DARRAY(endPos, endPosition_);

            game_value array_input = functions.new_array(size_t(4));
            ((game_data_array *)array_input.data)[0] = (game_data_array &)beginPos;
            ((game_data_array *)array_input.data)[1] = (game_data_array &)endPos;
            ((game_data_object *)array_input.data)[2] = (game_data_object &)(ignore_obj_one_->rv_obj.data);
            ((game_data_object *)array_input.data)[3] = (game_data_object &)(ignore_obj_two_->rv_obj.data);
            
            game_value intersects_value = functions.invoke_raw_unary(client::__sqf::unary__lineintersects__array__ret__bool, &array_input);
            bool intersects = ((game_data_bool *)intersects_value.data)->val;
            functions.free_value(&intersects_value);
            functions.free_value(&array_input);
            //functions.free_value(&beginPos);
            //functions.free_value(&endPos);
            return intersects;
        }

        void line_intersects_objs(vector3 beginPosition_, vector3 endPosition_, const object& withObj_, const object& ignoreObj_, bool sortByDistance_, int flags_) {
            STACK_3DARRAY(beginPos, beginPosition_);
            STACK_3DARRAY(endPos, endPosition_);
            STACK_SCALAR(flags, flags_);
            STACK_BOOL(stortByDistance, sortByDistance_);

            game_value array_input = functions.new_array(size_t(6));
            ((game_data_array *)array_input.data)[0] = (game_data_array &)beginPos;
            ((game_data_array *)array_input.data)[1] = (game_data_array &)endPos;
            ((game_data_object *)array_input.data)[2] = (game_data_object &)(withObj_->rv_obj.data);
            ((game_data_object *)array_input.data)[3] = (game_data_object &)(ignoreObj_->rv_obj.data);
            ((game_data_bool *)array_input.data)[4] = (game_data_object &)stortByDistance;
            ((game_data_number *)array_input.data)[5] = (game_data_number &)flags;

            game_value intersects_value = functions.invoke_raw_unary(client::__sqf::unary__lineintersectsobjs__array__ret__array, &array_input);
            game_data_array* intersects = ((game_data_array *)intersects_value.data);
  
            // std::array requires us to know the exact length at compile time. So use vector instead?
            // std::vector<game_data_object> arr(intersects->length);
            
        }

    }
}