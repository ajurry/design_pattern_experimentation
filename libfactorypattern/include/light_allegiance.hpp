#pragma once
#include <string>
#include "allegiance_interface.hpp"

namespace allegiance {
    class light_allegiance : public allegiance_interface {
        public:
            std::string get_allegiance_type() final;
    };
};