/**
 * @file
 * @brief Client C++ API types
*/

#pragma once
#include "shared.hpp"
#include "shared\types.hpp"
#include <memory>

namespace intercept {
    namespace client {
        namespace types {
            /** Container class for RVEngine variables (objects)
             * 
             */
            class object_ptr {
            public:
                object_ptr();
                /** game_value to object_ptr copy constructor
                 * @param rv_obj_ Game value to store
                */
                object_ptr(rv_types::game_value rv_obj_);
                ~object_ptr();
                /** Game value storage */
                rv_types::game_value rv_obj;
            };

            /** std::shared_ptr type implementation for object_ptr */
            typedef std::shared_ptr<object_ptr> object;
        }
    }
}