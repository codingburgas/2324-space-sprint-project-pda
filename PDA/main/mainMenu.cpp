#include"mainMenu.h"
#include "raylib.h"

void planetsMenu() {

	const int screenWidth = 1920;
	const int screenHeight = 1080;

	while (!WindowShouldClose()) {
		BeginDrawing();
		DrawRectangle(0, 0, screenWidth, screenHeight, WHITE);
		EndDrawing();
	}
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


