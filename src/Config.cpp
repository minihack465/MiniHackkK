#include "Config.hpp"

#include <array>
#include <cstddef>

namespace mh {
    namespace {
        std::array<bool, static_cast<std::size_t>(Feature::Count)> s_enabled{};
    }

    bool isEnabled(Feature feature) {
        auto index = static_cast<std::size_t>(feature);
        if (index >= s_enabled.size()) return false;
        return s_enabled[index];
    }

    void setEnabled(Feature feature, bool enabled) {
        auto index = static_cast<std::size_t>(feature);
        if (index < s_enabled.size()) {
            s_enabled[index] = enabled;
        }
    }
}
