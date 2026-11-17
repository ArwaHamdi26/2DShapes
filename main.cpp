#include <iostream>

#include "./include/Circle.hpp"
#include "./include/MyRectangle.hpp"
#include "./include/MySquare.hpp"
#include "./include/MyTriangle.hpp"
using namespace std;
using namespace CustomShapes;
int main() {
  InitWindow(800, 600, "2D Shapes in Raylib");
  SetTargetFPS(60);

  Circle c;
  MyRectangle r;
  MySquare s;
  MyTriangle t;

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    c.draw();
    r.draw();
    s.draw();
    t.draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}