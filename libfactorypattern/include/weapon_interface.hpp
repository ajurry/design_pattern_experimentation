#pragma once
#include <string>

namespace weapon {
    class weapon_interface {
        public:
            virtual std::string get_weapon_type() = 0;
    };
};