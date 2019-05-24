#pragma once
#include <string>
#include "weapon_interface.hpp"

namespace weapon {
    class bow_weapon : public weapon_interface {
        public:
            std::string get_weapon_type() final;
    };
};