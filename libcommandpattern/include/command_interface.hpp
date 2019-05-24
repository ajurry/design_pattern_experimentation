#pragma once

namespace command {
    class command_interface {
        public:
            command_interface() = default;
            virtual ~command_interface() = default;
            
            virtual void execute() = 0;
            virtual void undo() = 0;
    };
}