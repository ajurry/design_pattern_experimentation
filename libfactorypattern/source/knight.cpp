#include "knight.hpp"
#include "barracks_factory_interface.hpp"

#include <sstream>

using namespace unit;

knight::knight(barracks_factory::barracks_factory_interface* factory) 
    : factory(factory)
{
    prepare_unit();
}

void knight::prepare_unit()
{
    allegiance.reset(factory->create_allegiance());

    armour.reset(factory->create_armour());
    
    weapon.reset(factory->create_weapon());

    horse.reset(factory->create_horse());
}

std::string knight::get_unit()
{
    std::stringstream ss;
    ss << allegiance->get_allegiance_type()
        << "-"
        << armour->get_armour_type()
        << "-"
        << weapon->get_weapon_type()
        << "-"
        << horse->get_horse_type();
    
    return ss.str();
}