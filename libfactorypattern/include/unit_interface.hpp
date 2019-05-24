#pragma once
#include "armour_interface.hpp"
#include "allegiance_interface.hpp"
#include "weapon_interface.hpp"
#include "horse_interface.hpp"

#include <memory>
#include <string>

namespace unit {
    class unit_interface {
        public:
            virtual void prepare_unit() = 0;
            virtual std::string get_unit() = 0;

        public:
            std::unique_ptr<allegiance::allegiance_interface> allegiance;
            std::unique_ptr<armour::armour_interface> armour;
            std::unique_ptr<weapon::weapon_interface> weapon;
            std::unique_ptr<weapon::weapon_interface> ranged_weapon;
            std::unique_ptr<horse::horse_interface> horse;
    };
}