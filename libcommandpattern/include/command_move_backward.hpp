#pragma once
#include "command_interface.hpp"

namespace command {
    class command_move_backward : public command_interface {
        public:
        command_move_backward() = default;
        ~command_move_backward() = default;

        void execute() final override;
        void undo() final override;
    };
};