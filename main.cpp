#include "raylib.h"
#include "raymath.h"
#include "Character.h"

int main()
{
    // window dimensions
    const int windowWidth{384};
    const int windowHeight{384};

    // initialize window
    InitWindow(windowWidth, windowHeight, "Classy Clash");

    Texture2D map = LoadTexture("nature_tileset/WorldMap.png");
    Vector2 mapPos{0.0, 0.0};
    const float mapScale{4.0f};

    Character knight{windowWidth, windowHeight};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        mapPos = Vector2Scale(knight.getWorldPos(), -1.f);

        // draw map
        DrawTextureEx(map, mapPos, 0.0, mapScale, WHITE);

        knight.tick(GetFrameTime());

        // chceck map bounds
        if (knight.getWorldPos().x < 0.f ||
            knight.getWorldPos().y < 0.f ||
            knight.getWorldPos().x + windowWidth > map.width * mapScale ||
            knight.getWorldPos().y + windowHeight > map.width * mapScale)

        {
            knight.undoMovement();
        }

        // stop drawning
        EndDrawing();
    }

    CloseWindow();
}