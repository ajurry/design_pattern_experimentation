#include "archer.hpp"
#include "barracks_factory_interface.hpp"

#include <sstream>

using namespace unit;

archer::archer(barracks_factory::barracks_factory_interface* factory) 
    : factory(factory)
{
    prepare_unit();
}

void archer::prepare_unit()
{
    allegiance.reset(factory->create_allegiance());

    armour.reset(factory->create_armour());

    ranged_weapon.reset(factory->create_ranged_weapon());
}

std::string archer::get_unit()
{
    std::stringstream ss;
    ss << allegiance->get_allegiance_type()
        << "-"
        << armour->get_armour_type()
        << "-"
        << ranged_weapon->get_weapon_type();
    
    return ss.str();
}