#include "orc_factory.hpp"

#include "armour_interface.hpp"
#include "allegiance_interface.hpp"
#include "weapon_interface.hpp"
#include "horse_interface.hpp"

#include "dark_allegiance.hpp"
#include "axe_weapon.hpp"
#include "bow_weapon.hpp"
#include "heavy_armour.hpp"
#include "skeleton_horse.hpp"

using namespace barracks_factory;

allegiance::allegiance_interface* orc_factory::create_allegiance()
{
    return new allegiance::dark_allegiance;
}

weapon::weapon_interface* orc_factory::create_ranged_weapon()
{
    return new weapon::bow_weapon;
}

weapon::weapon_interface* orc_factory::create_weapon()
{
    return new weapon::axe_weapon;
}

horse::horse_interface* orc_factory::create_horse()
{
    return new horse::skeleton_horse;
}

armour::armour_interface* orc_factory::create_armour()
{
    return new armour::heavy_armour;
}