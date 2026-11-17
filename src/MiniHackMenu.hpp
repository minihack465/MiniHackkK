#pragma once

#include <Geode/Geode.hpp>

class MiniHackMenu : public geode::Popup<> {
protected:
    bool setup() override;

public:
    static MiniHackMenu* create();
};
