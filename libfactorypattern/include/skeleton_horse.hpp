#pragma once
#include <string>
#include "horse_interface.hpp"

namespace horse {
    class skeleton_horse : public horse_interface {
        public:
            std::string get_horse_type() final;
    };
};