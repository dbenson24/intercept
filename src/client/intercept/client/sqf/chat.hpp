#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "client\client_types.hpp"

using namespace intercept::client::types;

namespace intercept {
    namespace sqf {
		namespace chat {
			namespace __helpers {
				void chat_message(binary_function fnc_, object obj_, const std::string &message_);
			}
			void side_chat(object obj_, const std::string &message_);
			void global_chat(object obj_, const std::string & message_);
			void group_chat(object obj_, const std::string & message_);
			void vehicle_chat(object obj_, const std::string & message_);
			void command_chat(object obj_, const std::string & message_);
			void system_chat(const std::string &message_);
			void custom_chat(object obj_, uint32_t channel_id_, const std::string &message_);
		}
    }
}
