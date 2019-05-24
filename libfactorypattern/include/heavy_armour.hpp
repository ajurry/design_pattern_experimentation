#pragma once
#include <string>

#include "armour_interface.hpp"

namespace armour {
    class heavy_armour : public armour_interface {
        public:
            std::string get_armour_type() final;
    };
};