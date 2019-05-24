#pragma once

namespace command {
    class command_interface;
}

namespace command {
    class invoker_interface {
        public:
            virtual void key_was_pressed(char key) = 0;
            virtual void set_command(char key, command_interface* command) = 0;
            virtual void undo_all_commands() = 0;
    };
};