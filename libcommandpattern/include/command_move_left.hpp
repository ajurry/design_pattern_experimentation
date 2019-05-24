#pragma once
#include "command_interface.hpp"

namespace command {
    class command_move_left : public command_interface {
        public:
        command_move_left() = default;
        ~command_move_left() = default;

        void execute() final override;
        void undo() final override;
    };
};