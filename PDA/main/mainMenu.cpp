#include "mainMenu.h" // Include the header file for function declarations and definitions related to the main menu.
#include "planetsMenu.h" // Include the header file for function declarations and definitions related to the planets menu.

void menu() {
    // Define screen dimensions.
    const int screenWidth = 1920;
    const int screenHeight = 1080;

    // Define the position and dimensions of the menu button.
    Rectangle button = { (screenWidth / 2) - 310, (screenHeight / 2) - 55, 630, 90 };

    // Initialize the window and set target FPS.
    InitWindow(screenWidth, screenHeight, "Planet Dawn");
    SetTargetFPS(60);

    // Load and resize the texture for the main menu.
    Texture2D resizedmainMenu;
    Image mainMenu = LoadImage("../assets/backgrounds/mainMenu.png");
    ImageResize(&mainMenu, GetScreenWidth(), GetScreenHeight());
    resizedmainMenu = LoadTextureFromImage(mainMenu);

    // Main loop for the main menu.
    while (!WindowShouldClose()) {
        BeginDrawing();

        // Draw the main menu texture.
        DrawTexture(resizedmainMenu, 0, 0, WHITE);

        // Check if the mouse is over the menu button.
        Vector2 mousePosition = GetMousePosition();
        bool isMouseOverButton = CheckCollisionPointRec(mousePosition, button);

        // Draw the menu button and text.
        DrawRectangleRec(button, (isMouseOverButton ? LIGHTGRAY : WHITE));
        DrawText("See our solar system!", (screenWidth / 2) - 277, (screenHeight / 2) - 36, 50, BLACK);

        // If the mouse is over the button and the left mouse button is pressed, transition to the planets menu.
        if (isMouseOverButton && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            planetsMenu();
        }

        // Draw the title and separator line.
        DrawText("Planet Dawn", (screenWidth / 2) - 300, screenHeight - 800, 100, WHITE);
        DrawRectangle((screenWidth / 2) - 310, (screenHeight / 2) - 129, 630, 9, WHITE);

        EndDrawing();
    }

    // Unload the main menu image and texture, and close the window.
    UnloadImage(mainMenu);
    UnloadTexture(resizedmainMenu);
    CloseWindow();
}
