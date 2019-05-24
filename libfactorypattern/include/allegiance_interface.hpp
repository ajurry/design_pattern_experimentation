#pragma once
#include <string>

namespace allegiance {
    class allegiance_interface {
        public:
            virtual std::string get_allegiance_type() = 0;
    };
};