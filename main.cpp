#include "raylib.h"

int main() {

    // window dimensions
    int width = 350;
    int height = 200;
    InitWindow(width, height, "Game Window");

    // circle coordinates
    int circle_x{175};
    int circle_y{100};

    SetTargetFPS(60);

    while ( WindowShouldClose() == false ) {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins

        DrawCircle( circle_x, circle_y, 25, BLUE);

        if ((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && circle_x < 350 ) {
            circle_x += 10;
        }
        if ((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && circle_x > 0 ) {
            circle_x -= 10;
        }
        // if (IsKeyDown(KEY_W)) {
        //     circle_y -= 10;
        // }
        // if (IsKeyDown(KEY_S)) {
        //     circle_y += 10;
        // }

        // Game logic ends
        EndDrawing();
    }
}