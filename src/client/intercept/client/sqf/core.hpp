#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "client\client_types.hpp"

using namespace intercept::client::types;

namespace intercept {
    namespace sqf {
		namespace core {
			std::vector<object> all_3den_entities();
			std::vector<object> all_curators();
			std::vector<object> all_dead();
			std::vector<object> all_deadmen();
			std::vector<display> all_displays();
			std::vector<group> all_groups();
			std::vector<marker> all_map_markers();
			std::vector<object> all_mines();
			std::vector<object> all_players();
			// std::vector<site> all_sites(); // This command is depecrated and no longer supported https://community.bistudio.com/wiki/allSites
			std::vector<object> all_units();
			std::vector<object> all_units_uav();

			object player();
			object create_vehicle(std::string type_, vector3 pos_);
			object create_vehicle(std::string type_, vector3 pos_, std::vector<marker> markers_, float placement_, std::string special_);
			void delete_vehicle(object obj_);

			float server_time();
			std::string server_name();

			bool is_null(object value_);
			bool is_null(group value_);
			bool is_null(control value_);
			bool is_null(display value_);
			bool is_null(script value_);
			bool is_null(task value_);

			script script_null();
			task task_null();
			rv_namespace ui_namespace();

			std::vector<script> diag_active_mission_fsms();
			std::vector<script> diag_active_sqf_scripts();
			std::vector<script> diag_active_sqs_scripts();

			bool __sqfassert(bool test_);

            std::vector<control> all_controls(display display_);

            std::vector<std::string> all_turrets(object vehicle_, bool person_turrets_);

            std::vector<std::string> all_turrets(object vehicle_);

            std::vector<std::string> all_variables(object value_);
            std::vector<std::string> all_variables(control value_);
            std::vector<std::string> all_variables(team_member value_);
            std::vector<std::string> all_variables(rv_namespace value_);
            std::vector<std::string> all_variables(group value_);
            std::vector<std::string> all_variables(task value_);
            std::vector<std::string> all_variables(location value_);
		}
    }
}
