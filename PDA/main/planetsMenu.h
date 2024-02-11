#pragma once
#include <string>
#include "raylib.h"

struct Planet {
    Texture2D texture;
    Rectangle exploreButton;
};

void planetsMenu();