#pragma once // Include guard to ensure this header file is included only once during compilation.

#include <string> // Include necessary header for std::string.
#include "raylib.h" // Include the Raylib library.

// Structure to represent a planet, containing its texture and explore button position.
struct Planet {
    Texture2D texture; // Texture of the planet.
    Rectangle exploreButton; // Position and dimensions of the explore button for the planet.
};

// Function declaration for the planets menu.
void planetsMenu();
