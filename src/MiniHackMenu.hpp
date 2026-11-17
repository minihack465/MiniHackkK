
#pragma once

#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

class MiniHackMenu : public geode::Popup {
protected:
    bool init();

public:
    static MiniHackMenu* create();
};

