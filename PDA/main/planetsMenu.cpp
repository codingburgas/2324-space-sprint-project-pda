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

    Texture2D resizedplanetsMenu;
    Image planetsMenu = LoadImage("../assets/planetsMenu.png");
    ImageResize(&planetsMenu, GetScreenWidth(), GetScreenHeight());
    resizedplanetsMenu = LoadTextureFromImage(planetsMenu);

    while (!WindowShouldClose()) {
        BeginDrawing();

        DrawTexture(resizedplanetsMenu, 0, 0, WHITE);

        for (int i = 0; i < planetsCount; ++i) {
            Vector2 textDimensions = MeasureTextEx(GetFontDefault(), planets[i].name.c_str(), textSize, 1);
            int textX = margin;
            int textY = (int)planets[i].exploreButton.y - (int)textDimensions.y - margin;
            DrawText(planets[i].name.c_str(), textX, textY, textSize, WHITE);

            DrawRectangleRec(planets[i].exploreButton, CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) ? LIGHTGRAY : WHITE);
            DrawText("Explore Planet", (int)planets[i].exploreButton.x + 20, (int)planets[i].exploreButton.y + 15, 20, BLACK);
        }

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

        EndDrawing();
    }

    for (int i = 0; i < planetsCount; ++i) {
        UnloadTexture(planets[i].texture);
    }
    UnloadImage(planetsMenu);
    UnloadTexture(resizedplanetsMenu);
    CloseWindow();
}