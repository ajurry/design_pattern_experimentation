#pragma once
#include "command_interface.hpp"

namespace command {
    class command_null : public command_interface {
        public:
        command_null() = default;
        ~command_null() = default;

        void execute() final override;
        void undo() final override;
    };
};