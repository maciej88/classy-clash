#include "raylib.h"

int main()
{
    // window dimensions
    int windowDimensions[2];
    windowDimensions[0] = 384;
    windowDimensions[1] = 384;
    // initialize window
    InitWindow(windowDimensions[0], windowDimensions[1], "Classy Clash");


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {


        // stop drawning
        EndDrawing();
    }

    CloseWindow();
}