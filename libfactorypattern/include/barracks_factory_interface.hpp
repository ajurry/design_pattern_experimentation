#pragma once
#include "armour_interface.hpp"
#include "allegiance_interface.hpp"
#include "weapon_interface.hpp"
#include "horse_interface.hpp"

namespace barracks_factory {
    class barracks_factory_interface {
        public:
            virtual allegiance::allegiance_interface* create_allegiance() = 0;
            virtual armour::armour_interface* create_armour() = 0;
            virtual weapon::weapon_interface* create_weapon() = 0;
            virtual weapon::weapon_interface* create_ranged_weapon() = 0;
            virtual horse::horse_interface* create_horse() = 0;
    };
}