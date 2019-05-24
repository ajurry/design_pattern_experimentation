#pragma once
#include "unit_interface.hpp"
#include "barracks_factory_interface.hpp"

namespace unit {
    class archer : public unit_interface {
        public:
            explicit archer(barracks_factory::barracks_factory_interface* factory);
            void prepare_unit() final;
            std::string get_unit() final;
        private:
            barracks_factory::barracks_factory_interface* factory;
    };
}