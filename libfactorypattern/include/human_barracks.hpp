#pragma once
#include "barracks_interface.hpp"
#include "unit_types.hpp"

namespace unit {
    class unit_interface;
}

namespace barracks {
    class human_barracks : public barracks_interface {
        public:
            explicit human_barracks();
            std::unique_ptr<unit::unit_interface> order_unit(const unit::barracks_units& unit_to_order) final;
        private:
            std::unique_ptr<barracks_factory::barracks_factory_interface> barracks_factory;
    };
};