#pragma once
#include "unit_types.hpp"
#include "barracks_factory_interface.hpp"

#include <memory>

namespace unit {
    class unit_interface;
}

namespace barracks {
    class barracks_interface {
        public:
            virtual std::unique_ptr<unit::unit_interface> order_unit(const unit::barracks_units& unit_to_order) = 0;
    };
};