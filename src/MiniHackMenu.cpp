#include "MiniHackMenu.hpp"
#include "Config.hpp"

using namespace geode::prelude;

MiniHackMenu* MiniHackMenu::create() {
    auto ret = new MiniHackMenu();
    if (ret->init(360.f, 220.f, "GJ_square01.png")) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

bool MiniHackMenu::setup() {
    setTitle("MINIHACK");

    auto winSize = CCDirector::get()->getWinSize();
    auto title = CCLabelBMFont::create("MiniHack project loaded", "bigFont.fnt");
    if (title) {
        title->setScale(0.45f);
        title->setPosition({m_size.width / 2.f, m_size.height / 2.f + 25.f});
        m_mainLayer->addChild(title);
    }

    auto note = CCLabelBMFont::create(
        "Feature toggles and gameplay hooks will be added next",
        "chatFont.fnt"
    );
    if (note) {
        note->setScale(0.32f);
        note->setPosition({m_size.width / 2.f, m_size.height / 2.f - 15.f});
        note->setColor({190, 190, 190});
        m_mainLayer->addChild(note);
    }

    return true;
}
