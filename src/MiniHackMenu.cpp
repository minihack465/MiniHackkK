
#include "MiniHackMenu.hpp"

using namespace geode::prelude;

MiniHackMenu* MiniHackMenu::create() {
    auto ret = new MiniHackMenu();

    if (ret->init()) {
        ret->autorelease();
        return ret;
    }

    delete ret;
    return nullptr;
}

bool MiniHackMenu::init() {
    if (!Popup::init(360.f, 220.f))
        return false;

    setTitle("MINIHACK");

    auto title = CCLabelBMFont::create(
        "MiniHack loaded!",
        "bigFont.fnt"
    );

    if (title) {
        title->setScale(0.55f);
        m_mainLayer->addChildAtPosition(
            title,
            Anchor::Center
        );
    }

    return true;
}

