#pragma once

#include <string>
#include "raylib.h"

// Structure to represent a planet, containing its texture and explore button position.
struct Planet {
    Texture2D texture; // Texture of the planet.
    Rectangle exploreButton; // Position and dimensions of the explore button for the planet.
};

// Function declaration for the planets menu.
void planetsMenu();
