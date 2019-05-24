#pragma once
#include "invoker_interface.hpp"

#include <map>
#include <vector>
#include <memory>

namespace command {
    class command_interface;
}

namespace command {
    class keyboard_invoker : public invoker_interface {
        public:
            void key_was_pressed(char key) final override;
            void set_command(char key, command_interface* command) final override;
            void undo_all_commands() final override;

        private:
            std::vector<command_interface*> command_history;
            std::map<char, std::unique_ptr<command_interface>> command_list;
    };
};