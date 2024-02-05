#include"planetsMenu.h"
#include"planets.h"

void planetsMenu() {
    const int planetsCount = 8;
    const int buttonWidth = 200;
    const int buttonHeight = 50;
    const int margin = 10;
    const int spaceBetweenPlanets = 20;
    const int textSize = 20;

    Planet planets[planetsCount] = {
        {"Mercury", LoadTexture("#"), {margin, 100, buttonWidth, buttonHeight}},
        {"Venus", LoadTexture("#"), {margin, 160, buttonWidth, buttonHeight}},
        {"Earth", LoadTexture("#"), {margin, 220, buttonWidth, buttonHeight}},
        {"Mars", LoadTexture("#"), {margin, 280, buttonWidth, buttonHeight}},
        {"Jupiter", LoadTexture("#"), {margin, 340, buttonWidth, buttonHeight}},
        {"Saturn", LoadTexture("#"), {margin, 400, buttonWidth, buttonHeight}},
        {"Uranus", LoadTexture("#"), {margin, 460, buttonWidth, buttonHeight}},
        {"Neptune", LoadTexture("#"), {margin, 520, buttonWidth, buttonHeight}}
    };

    int startY = 100;
    for (int i = 0; i < planetsCount; ++i) {
        planets[i].exploreButton.y = startY + (float)(i * (textSize + buttonHeight + spaceBetweenPlanets + margin));
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        for (int i = 0; i < planetsCount; ++i) {
            Vector2 textDimensions = MeasureTextEx(GetFontDefault(), planets[i].name.c_str(), textSize, 1);
            int textX = margin;
            int textY = (int)planets[i].exploreButton.y - (int)textDimensions.y - margin;
            DrawText(planets[i].name.c_str(), textX, textY, textSize, WHITE);

            DrawRectangleRec(planets[i].exploreButton, CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) ? DARKGRAY : LIGHTGRAY);
            DrawText("Explore Planet", (int)planets[i].exploreButton.x + 20, (int)planets[i].exploreButton.y + 15, 20, BLACK);
        }

        if (CheckCollisionPointRec(GetMousePosition(), planets[3].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            mars();
        }

        EndDrawing();
    }

    for (int i = 0; i < planetsCount; ++i) {
        UnloadTexture(planets[i].texture);
    }

    CloseWindow();
}