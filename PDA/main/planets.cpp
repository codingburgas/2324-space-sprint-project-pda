#include"planets.h"

void mercury() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void venus() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void earth() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void mars() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void jupiter() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void saturn() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void uranus() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
void neptune() {

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    Texture2D resizedplanets;
    Image planets = LoadImage("../assets/planets.png");
    ImageResize(&planets, GetScreenWidth(), GetScreenHeight());
    resizedplanets = LoadTextureFromImage(planets);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawTexture(resizedplanets, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadImage(planets);
    UnloadTexture(resizedplanets);
}
