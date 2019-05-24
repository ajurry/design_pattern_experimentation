#include "human_factory.hpp"

#include "armour_interface.hpp"
#include "allegiance_interface.hpp"
#include "weapon_interface.hpp"
#include "horse_interface.hpp"

#include "light_allegiance.hpp"
#include "sword_weapon.hpp"
#include "bow_weapon.hpp"
#include "medium_armour.hpp"
#include "normal_horse.hpp"

using namespace barracks_factory;

allegiance::allegiance_interface* human_factory::create_allegiance()
{
    return new allegiance::light_allegiance;
}

weapon::weapon_interface* human_factory::create_ranged_weapon()
{
    return new weapon::bow_weapon;
}

weapon::weapon_interface* human_factory::create_weapon()
{
    return new weapon::sword_weapon;
}

horse::horse_interface* human_factory::create_horse()
{
    return new horse::normal_horse;
}

armour::armour_interface* human_factory::create_armour()
{
    return new armour::medium_armour;
}