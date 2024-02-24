#include "planetsMenu.h" // Include the header file for function declarations and definitions.
#include "planets.h" // Include the header file for planet exploration functions.

void planetsMenu() {
    // Constants defining the layout and appearance of the planets menu.
    const int planetsCount = 8;
    const int buttonWidth = 200;
    const int buttonHeight = 50;
    const int margin = 10;
    const int spaceBetweenPlanets = 20;
    const int textSize = 20;

    // Arrays holding the positions of each planet's explore button.
    const int newPositionX[planetsCount] = { 370, 960, 1560, 370, 960, 1560, 690, 1270 };
    const int newPositionY[planetsCount] = { 340, 340, 340, 610, 610, 610, 870, 870 };

    // Array of Planet structs holding information about each planet's explore button and texture.
    Planet planets[planetsCount] = {
       {LoadTexture("#"), {newPositionX[0], newPositionY[0], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[1], newPositionY[1], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[2], newPositionY[2], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[3], newPositionY[3], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[4], newPositionY[4], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[5], newPositionY[5], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[6], newPositionY[6], buttonWidth, buttonHeight}},
       {LoadTexture("#"), {newPositionX[7], newPositionY[7], buttonWidth, buttonHeight}}
    };

    // Load and resize the texture for the planets menu background.
    Texture2D resizedplanetsMenu;
    Image planetsMenu = LoadImage("../assets/backgrounds/planetsMenu.png");
    ImageResize(&planetsMenu, GetScreenWidth(), GetScreenHeight());
    resizedplanetsMenu = LoadTextureFromImage(planetsMenu);

    // Main loop for displaying the planets menu.
    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanetsMenu, 0, 0, WHITE);

        // Loop through each planet to draw its explore button and text.
        for (int i = 0; i < planetsCount; ++i) {
            DrawRectangleRec(planets[i].exploreButton, CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) ? LIGHTGRAY : WHITE);
            DrawText("Explore Planet", (int)planets[i].exploreButton.x + 20, (int)planets[i].exploreButton.y + 15, 20, BLACK);
        }

        // Check if the mouse is over a planet's explore button and if the left mouse button is pressed to trigger exploration functions.
        if (CheckCollisionPointRec(GetMousePosition(), planets[0].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            mercury();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[1].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            venus();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[2].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            earth();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[3].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            mars();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[4].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            jupiter();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[5].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            saturn();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[6].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            uranus();
        }
        if (CheckCollisionPointRec(GetMousePosition(), planets[7].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            neptune();
        }
        // Draw text labels for each planet.
        DrawText("Mercury", 382, 270, 40, WHITE);
        DrawText("Venus", 992, 270, 40, WHITE);
        DrawText("Earth", 1602, 270, 40, WHITE);
        DrawText("Mars", 416, 540, 40, WHITE);
        DrawText("Jupiter", 990, 540, 40, WHITE);
        DrawText("Saturn", 1590, 540, 40, WHITE);
        DrawText("Uranus", 718, 800, 40, WHITE);
        DrawText("Neptune", 1290, 800, 40, WHITE);

        EndDrawing();
    }

    // Unload textures and images to free memory.
    for (int i = 0; i < planetsCount; ++i) {
        UnloadTexture(planets[i].texture);
    }
    UnloadImage(planetsMenu);
    UnloadTexture(resizedplanetsMenu);
    CloseWindow();
}