#pragma once
#include <cel/pal.h>
#include <misc/array2d.h>
#include <misc/point.h>
#include <optional>
#include <vector>

namespace Render
{
    struct LevelObject
    {
        bool valid;
        int32_t spriteCacheIndex;
        int32_t spriteFrame;
        Misc::Point fractionalPos;
        std::optional<Cel::Colour> hoverColor;
    };

    typedef Misc::Array2D<std::vector<LevelObject>> LevelObjects; // TODO: get a custom small vector class + use it here
}
