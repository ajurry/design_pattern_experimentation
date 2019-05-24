#pragma once
#include "command_interface.hpp"

namespace command {
    class command_move_forward : public command_interface {
        public:
        command_move_forward() = default;
        ~command_move_forward() = default;

        void execute() final override;
        void undo() final override;
    };
};