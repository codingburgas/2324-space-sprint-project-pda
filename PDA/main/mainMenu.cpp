#include "raylib.h"
#include <string>

struct Planet {
    std::string name;
    Texture2D texture;
    Rectangle exploreButton;
};

const int planetsCount = 8;

void mars() {

    const int screenWidth = 1920;
    const int screenHeight = 1080;

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawRectangle(0, 0, screenWidth, screenHeight, WHITE);
        EndDrawing();
    }
}

void planetsMenu() {
    const int screenWidth = 1920;
    const int screenHeight = 1080;
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
        planets[i].exploreButton.y = startY + (i * (textSize + buttonHeight + spaceBetweenPlanets + margin));
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        for (int i = 0; i < planetsCount; ++i) {
            Vector2 textDimensions = MeasureTextEx(GetFontDefault(), planets[i].name.c_str(), textSize, 1);
            int textX = margin;
            int textY = planets[i].exploreButton.y - textDimensions.y - margin;
            DrawText(planets[i].name.c_str(), textX, textY, textSize, WHITE);

            DrawRectangleRec(planets[i].exploreButton, CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) ? DARKGRAY : LIGHTGRAY);
            DrawText("Explore Planet", planets[i].exploreButton.x + 20, planets[i].exploreButton.y + 15, 20, BLACK);

            if (CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                if (CheckCollisionPointRec(GetMousePosition(), planets[i].exploreButton) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                    mars();
                }
            }
        }

        EndDrawing();
    }

    for (int i = 0; i < planetsCount; ++i) {
        UnloadTexture(planets[i].texture);
    }

    CloseWindow();
}
void menu() {
	const int screenWidth = 1920;
	const int screenHeight = 1080;

	Rectangle button = { (screenWidth / 2) - 310, (screenHeight / 2) - 55, 630, 90 };

	InitWindow(screenWidth, screenHeight, "Planet Dawn");
	SetTargetFPS(60);

	Texture2D resizedBackground;
	Image bg = LoadImage("../assets/background.png");
	ImageResize(&bg,GetScreenWidth(), GetScreenHeight());
	resizedBackground = LoadTextureFromImage(bg);

	while (!WindowShouldClose()) {
		BeginDrawing();

		DrawTexture(resizedBackground, 0, 0, WHITE);

		Vector2 mousePosition = GetMousePosition();
		bool isMouseOverButton = CheckCollisionPointRec(mousePosition, button);
		DrawRectangleRec(button, (isMouseOverButton ? LIGHTGRAY : WHITE));
		DrawText("See our solar system!", (screenWidth / 2) - 277, (screenHeight / 2) - 36, 50, BLACK);
		if (isMouseOverButton && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			planetsMenu();
		}
		DrawText("Planet Dawn", (screenWidth / 2) - 300, screenHeight - 800, 100, WHITE);
		DrawRectangle((screenWidth / 2) - 310, (screenHeight / 2) - 129.5, 630,9, WHITE);

		EndDrawing();
	}
	UnloadImage(bg);
	UnloadTexture(resizedBackground);
	CloseWindow();
}


