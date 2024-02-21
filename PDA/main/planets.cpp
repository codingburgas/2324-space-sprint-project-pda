#include"planets.h" // Include the header file for function declarations and definitions.

// Function to display Mercury.
void mercury() {

    // Get screen width and height.
    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    // Load and resize the texture for the background image.
    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    // Load and resize the texture for Mercury.
    Texture2D resizedMercury;
    Image Mercury = LoadImage("../assets/Mercury.png");
    ImageResize(&Mercury, 900, 705);
    resizedMercury = LoadTextureFromImage(Mercury);

    // Main loop for displaying Mercury.
    while (!WindowShouldClose()) {
        BeginDrawing();
        // Draw the background and Mercury textures along with text.
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedMercury, 120, 225, WHITE);
        DrawText("Mercury", 1160, 220, 70, WHITE);
        EndDrawing();
    }
    // Unload images and textures to free memory.
    UnloadImage(planets);
    UnloadImage(Mercury);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedMercury);
}
// Function to display Venus.
void venus() {
    // Same structure as the mercury function, with adjustments for Venus.

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedVenus;
    Image Venus = LoadImage("../assets/Venus.png");
    ImageResize(&Venus, 987, 750);
    resizedVenus = LoadTextureFromImage(Venus);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedVenus, 75, 196, WHITE);
        DrawText("Venus", 1210, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Venus);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedVenus);
}
// Function to display Earth.
void earth() {
    // Same structure as the mercury function, with adjustments for Earth.

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedEarth;
    Image Earth = LoadImage("../assets/Earth.png");
    ImageResize(&Earth, 1000, 730);
    resizedEarth = LoadTextureFromImage(Earth);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedEarth, 50, 198, WHITE);
        DrawText("Earth", 1230, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Earth);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedEarth);
}
// Function to display Mars.
void mars() {
    // Same structure as the mercury function, with adjustments for Mars.

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedMars;
    Image Mars = LoadImage("../assets/Mars.png");
    ImageResize(&Mars, 900, 705);
    resizedMars = LoadTextureFromImage(Mars);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedMars, 120, 225, WHITE);
        DrawText("Mars", 1240, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Mars);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedMars);
}
// Function to display Jupiter.
    void jupiter() {
        // Same structure as the mercury function, with adjustments for Jupiter.
        const int screenWidth = GetScreenWidth();
        const int screenHeight = GetScreenHeight();

        Texture2D resizedplanets;
        Image planets = LoadImage("../assets/planets.png");
        ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
        resizedplanets = LoadTextureFromImage(planets);

        Texture2D resizedJupiter;
        Image Jupiter = LoadImage("../assets/Jupiter.png");
        ImageResize(&Jupiter, 900, 690);
        resizedJupiter = LoadTextureFromImage(Jupiter);

        while (!WindowShouldClose()) {
            BeginDrawing();
            DrawTexture(resizedplanets, 0, 0, WHITE);
            DrawTexture(resizedJupiter, 120, 225, WHITE);
            DrawText("Jupiter", 1200, 220, 70, WHITE);
            EndDrawing();
        }
        UnloadImage(planets);
        UnloadImage(Jupiter);
        UnloadTexture(resizedplanets);
        UnloadTexture(resizedJupiter);
        
    }
    // Function to display Saturn.
void saturn() {
    // Same structure as the mercury function, with adjustments for Saturn.

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedSaturn;
    Image Saturn = LoadImage("../assets/Saturn.png");
    ImageResize(&Saturn, 900, 610);
    resizedSaturn = LoadTextureFromImage(Saturn);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedSaturn, 120, 230, WHITE);
        DrawText("Saturn", 1240, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Saturn);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedSaturn);
}
// Function to display Uranus.
void uranus() {
    // Same structure as the mercury function, with adjustments for Uranus.

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedUranus;
    Image Uranus = LoadImage("../assets/Uranus.png");
    ImageResize(&Uranus, 750, 680);
    resizedUranus = LoadTextureFromImage(Uranus);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedUranus, 160, 245, WHITE);
        DrawText("Uranus", 1200, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Uranus);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedUranus);
}
// Function to display Neptune.
void neptune() {
    // Same structure as the mercury function, with adjustments for Neptune .

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    Texture2D resizedNeptune;
    Image Neptune = LoadImage("../assets/Neptune.png");
    ImageResize(&Neptune, 900, 675);
    resizedNeptune = LoadTextureFromImage(Neptune);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        DrawTexture(resizedNeptune, 120, 270, WHITE);
        DrawText("Neptune", 1190, 220, 70, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Neptune);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedNeptune);
}
