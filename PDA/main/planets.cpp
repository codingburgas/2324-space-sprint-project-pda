#include"planets.h"

void mars() {

    const int screenWidth = 1920;
    const int screenHeight = 1080;

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawRectangle(0, 0, screenWidth, screenHeight, WHITE);
        DrawText("tova e mars", 50, 50, 10, GREEN);
        EndDrawing();
    }
}
