#include "human_barracks.hpp"
#include "human_factory.hpp"

#include "unit_types.hpp"
#include "soldier.hpp"
#include "knight.hpp"
#include "archer.hpp"

#include "unit_interface.hpp"

#include <memory>

using namespace barracks;
using namespace barracks_factory;
using namespace unit;

human_barracks::human_barracks()
    : barracks_factory(std::make_unique<human_factory>())
{
}

std::unique_ptr<unit_interface> human_barracks::order_unit(const unit::barracks_units& unit_to_order)
{
    std::unique_ptr<unit_interface> unit;

    switch (unit_to_order) 
    {
        case barracks_units::soldier: {
            unit = std::make_unique<soldier>(barracks_factory.get());
            break;
        }
        case barracks_units::archer: {
            unit = std::make_unique<archer>(barracks_factory.get());
            break;
        }
        case barracks_units::knight: {
            unit = std::make_unique<knight>(barracks_factory.get());
            break;
        }
        default:
            break;
    }

    return unit;
}