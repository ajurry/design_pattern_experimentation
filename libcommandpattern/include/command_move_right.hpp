#pragma once
#include "command_interface.hpp"

namespace command {
    class command_move_right : public command_interface {
        public:
        command_move_right() = default;
        ~command_move_right() = default;

        void execute() final override;
        void undo() final override;
    };
};