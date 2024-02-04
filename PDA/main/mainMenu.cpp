#include"mainMenu.h"
#include "raylib.h"

void menu() {
	const int screenWidth = 1920;
	const int screenHeight = 1080;

	Rectangle button = { (screenWidth / 2) - 110, (screenHeight / 2) - 150, 630, 90 };

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
		DrawRectangleRec(button, (isMouseOverButton ?  PINK : RED));
		DrawText("See our solar system!", (screenWidth / 2) - 75, (screenHeight / 2) - 130 , 50, BLACK);
		if (isMouseOverButton && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

		}

		EndDrawing();

	}
	UnloadImage(bg);
	UnloadTexture(resizedBackground);
	CloseWindow();
}

