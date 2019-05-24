#pragma once
#include <string>

namespace horse {
    class horse_interface {
        public:
            virtual std::string get_horse_type() = 0;
    };
};