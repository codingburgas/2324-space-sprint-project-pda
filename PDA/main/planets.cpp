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
        DrawText("Mercury", 1215, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("The smallest and closest planet to the Sun,", 1020, 470, 30, WHITE);
        DrawText("Mercury has a rocky body with a surface scarred", 980, 550, 30, WHITE);
        DrawText("by craters. It has no moons and an extremely thin", 980, 630, 30, WHITE);
        DrawText("atmosphere, leading to temperature extremes.", 1020, 710, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 280, 630, 9, WHITE);
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
        DrawText("Venus", 1250, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("Similar in size and structure to Earth but", 1035, 450, 30, WHITE);
        DrawText("very different in conditions, Venus has a thick,", 989, 530, 30, WHITE);
        DrawText("toxic atmosphere rich in carbon dioxide, with surface", 955, 615, 30, WHITE);
        DrawText("temperatures hot enough to melt lead. Its surface is", 965, 695, 30, WHITE);
        DrawText("volcanic and clouded by sulfuric acid clouds.", 1020, 780, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 325, 630, 9, WHITE);
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
        DrawText("Earth", 1260, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("The third planet from the Sun and the", 1055, 450, 30, WHITE);
        DrawText("only one known to support life, Earth", 1060, 530, 30, WHITE);
        DrawText("has a diverse environment and climate,", 1060, 615, 30, WHITE);
        DrawText("with vast oceans covering about 71% of", 1050, 695, 30, WHITE);
        DrawText("its surface. It has one moon, Luna.", 1090, 780, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 325, 630, 9, WHITE);
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
        DrawText("Mars", 1275, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("Known as the Red Planet due to its reddish", 1025, 450, 30, WHITE);
        DrawText("appearance from iron oxide (rust) on its surface,", 985, 530, 30, WHITE);
        DrawText("Mars has a thin atmosphere and features both the", 970, 615, 30, WHITE);
        DrawText("highest volcano and the deepest, longest canyon", 990, 695, 30, WHITE);
        DrawText("in the Solar System. It has two moons, Phobos and Deimos.", 920, 780, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 325, 630, 9, WHITE);
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
            DrawText("Jupiter", 1235, 220, 70, WHITE);
            DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

            DrawText("The largest planet in the Solar System,", 1035, 450, 30, WHITE);
            DrawText("Jupiter is a gas giant primarily composed of", 1010, 530, 30, WHITE);
            DrawText("hydrogen and helium. It has a famous Great Red Spot,", 945, 615, 30, WHITE);
            DrawText("a giant storm, and at least 79 moons, including the four", 930, 695, 30, WHITE);
            DrawText("large Galilean moons: Io, Europa, Ganymede, and Callisto.", 930, 780, 30, WHITE);

            DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 335, 630, 9, WHITE);
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
        DrawText("Saturn", 1250, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("Known for its stunning rings, Saturn", 1065, 450, 30, WHITE);
        DrawText("is a gas giant with a composition similar", 1055, 530, 30, WHITE);
        DrawText("to Jupiter's. It has over 80 moons, with", 1050, 615, 30, WHITE);
        DrawText("Titan being the largest, a moon larger than", 1015, 695, 30, WHITE);
        DrawText("the planet Mercury and possessing a thick atmosphere.", 930, 780, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 325, 630, 9, WHITE);
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
        DrawText("Uranus", 1240, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("A gas giant with a unique blue-green color", 1030, 450, 30, WHITE);
        DrawText("due to methane in its atmosphere, Uranus rotates", 960, 530, 30, WHITE);
        DrawText("on its side, making it distinct in the Solar System.", 980, 615, 30, WHITE);
        DrawText("It has 27 known moons and a faint ring system.", 1005, 695, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 255, 630, 9, WHITE);
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
        DrawText("Neptune", 1230, 220, 70, WHITE);
        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) - 160, 630, 9, WHITE);

        DrawText("The farthest known planet from the Sun,", 1040, 450, 30, WHITE);
        DrawText("Neptune is a blue gas giant, similar to Uranus,", 1010, 530, 30, WHITE);
        DrawText("with a dynamic atmosphere including high-speed", 995, 615, 30, WHITE);
        DrawText("winds and large storms. It has 14 known moons,", 1005, 695, 30, WHITE);
        DrawText("with Triton being the largest and geologically active.", 950, 780, 30, WHITE);

        DrawRectangle((screenWidth / 2) + 80, (screenHeight / 2) + 325, 630, 9, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadImage(Neptune);
    UnloadTexture(resizedplanets);
    UnloadTexture(resizedNeptune);
}
