#include "soldier.hpp"
#include "barracks_factory_interface.hpp"

#include <sstream>

using namespace unit;

soldier::soldier(barracks_factory::barracks_factory_interface* factory) 
    : factory(factory)
{
    prepare_unit();
}

void soldier::prepare_unit()
{
    allegiance.reset(factory->create_allegiance());

    armour.reset(factory->create_armour());
    
    weapon.reset(factory->create_weapon());
}

std::string soldier::get_unit()
{
    std::stringstream ss;
    ss << allegiance->get_allegiance_type()
        << "-"
        << armour->get_armour_type()
        << "-"
        << weapon->get_weapon_type();
    
    return ss.str();
}