#pragma once

#include <array>
#include <string_view>

namespace mh {
    enum class Feature {
        ShowHitboxes,
        CustomIcons,
        LevelInfo,
        PlayerStats,
        Count
    };

    struct FeatureInfo {
        Feature id;
        std::string_view name;
        std::string_view description;
    };

    constexpr std::array<FeatureInfo, 4> kFeatures{{
        { Feature::ShowHitboxes, "Show Hitboxes", "Display player hitboxes (not implemented yet)." },
        { Feature::CustomIcons, "Custom Icons", "Custom icon options (not implemented yet)." },
        { Feature::LevelInfo, "Level Information", "Show level details (not implemented yet)." },
        { Feature::PlayerStats, "Player Statistics", "Track session statistics (not implemented yet)." }
    }};

    bool isEnabled(Feature feature);
    void setEnabled(Feature feature, bool enabled);
}
