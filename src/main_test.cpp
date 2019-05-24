#include "barracks_interface.hpp"
#include "human_barracks.hpp"
#include "orc_barracks.hpp"
#include "unit_interface.hpp"
#include "unit_types.hpp"

#include "command_move_backward.hpp"
#include "command_move_forward.hpp"
#include "command_move_left.hpp"
#include "command_move_right.hpp"

#include "invoker_interface.hpp"
#include "keyboard_invoker.hpp"

#include <memory>
#include <iostream>
#include <string>

using namespace command;
using namespace barracks;
using namespace unit;

void print_barracks(const std::unique_ptr<barracks_interface>& unit_barracks);

int main ()
{
    std::unique_ptr<barracks_interface> unit_barracks;

    unit_barracks.reset(new human_barracks);
    print_barracks(unit_barracks);

    unit_barracks.reset(new orc_barracks);
    print_barracks(unit_barracks);

    std::unique_ptr<invoker_interface> invoker = std::make_unique<keyboard_invoker>();
    invoker->set_command('w', std::make_unique<command_move_forward>().release());
    invoker->set_command('a', std::make_unique<command_move_left>().release());
    invoker->set_command('s', std::make_unique<command_move_backward>().release());
    invoker->set_command('d', std::make_unique<command_move_right>().release());

    invoker->key_was_pressed('w');
    invoker->key_was_pressed('w');
    invoker->key_was_pressed('a');
    invoker->key_was_pressed('d');
    invoker->key_was_pressed('s');

    invoker->undo_all_commands();

    return 0;
}

void print_barracks(const std::unique_ptr<barracks_interface>& unit_barracks)
{
    std::unique_ptr<unit_interface> soldier = unit_barracks->order_unit(barracks_units::soldier);
    std::cout << soldier->get_unit() << std::endl;

    std::unique_ptr<unit_interface> archer = unit_barracks->order_unit(barracks_units::archer);
    std::cout << archer->get_unit() << std::endl;

    std::unique_ptr<unit_interface> knight = unit_barracks->order_unit(barracks_units::knight);
    std::cout << knight->get_unit() << std::endl;
}