#pragma once
#include <string>
#include "raylib.h"

struct Planet {
    std::string name;
    Texture2D texture;
    Rectangle exploreButton;
};

void planetsMenu();