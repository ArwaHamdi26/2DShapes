#include <iostream>

#include "./include/Circle.hpp"
#include "./include/MyRectangle.hpp"
#include "./include/MySquare.hpp"

using namespace std;
using namespace CustomShapes;
int main() {
  InitWindow(800, 600, "2D Shapes in Raylib");
  SetTargetFPS(60);

  Circle c;
  MyRectangle r;
  MySquare s;

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    c.draw();
    r.draw();
    s.draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}