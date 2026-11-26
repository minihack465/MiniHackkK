
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

    // Dark background
    auto bg = CCLayerColor::create(
        ccc4(18, 18, 22, 255),
        340.f,
        180.f
    );

    bg->setPosition({10.f, 10.f});
    m_mainLayer->addChild(bg);

    // Red header
    auto header = CCLayerColor::create(
        ccc4(170, 25, 35, 255),
        340.f,
        35.f
    );

    header->setPosition({10.f, 155.f});
    m_mainLayer->addChild(header);

    // Title
    auto title = CCLabelBMFont::create(
        "MINIHACK",
        "bigFont.fnt"
    );

    title->setScale(0.65f);
    title->setPosition({180.f, 172.f});
    m_mainLayer->addChild(title);

    // Tabs
    const char* tabs[] = {
        "GAMEPLAY",
        "VISUALS",
        "PLAYER"
    };

    float tabX[] = {75.f, 180.f, 285.f};

    for (int i = 0; i < 3; i++) {
        auto tab = CCLabelBMFont::create(
            tabs[i],
            "bigFont.fnt"
        );

        tab->setScale(0.38f);
        tab->setPosition({tabX[i], 137.f});
        tab->setColor(ccc3(255, 80, 80));

        m_mainLayer->addChild(tab);
    }

    // Feature list
    const char* features[] = {
        "Show Hitboxes",
        "Custom Icons",
        "Level Information",
        "Player Statistics"
    };

    for (int i = 0; i < 4; i++) {
        auto label = CCLabelBMFont::create(
            features[i],
            "bigFont.fnt"
        );

        label->setScale(0.42f);
        label->setAnchorPoint({0.f, 0.5f});
        label->setPosition({
            35.f,
            105.f - i * 30.f
        });

        m_mainLayer->addChild(label);
    }

    return true;
}
