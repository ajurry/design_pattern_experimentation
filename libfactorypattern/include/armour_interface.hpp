#pragma once
#include <string>

namespace armour {
    class armour_interface {
        public:
            virtual std::string get_armour_type() = 0;
    };
};