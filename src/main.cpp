#include <Geode/Geode.hpp>
#include "MiniHackMenu.hpp"

using namespace geode::prelude;

$on_game(Loaded) {
    listenForKeybindSettingPresses(
        "open-menu",
        [](Keybind const&, bool down, bool repeat, double) {
            if (down && !repeat) {
                if (auto menu = MiniHackMenu::create()) {
                    menu->show();
                }
            }
        }
    );
}
