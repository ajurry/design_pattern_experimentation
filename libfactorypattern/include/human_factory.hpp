#pragma once
#include "barracks_factory_interface.hpp"
#include "armour_interface.hpp"
#include "allegiance_interface.hpp"
#include "weapon_interface.hpp"
#include "horse_interface.hpp"

namespace barracks_factory {
    class human_factory : public barracks_factory_interface {
        public:
            allegiance::allegiance_interface* create_allegiance() final override;
            armour::armour_interface* create_armour() final override;
            weapon::weapon_interface* create_weapon() final override;
            weapon::weapon_interface* create_ranged_weapon() final override;
            horse::horse_interface* create_horse() final override;
    };
};