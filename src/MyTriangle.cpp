#include <iostream>
using namespace std;
#include "../include/MyTriangle.hpp"
#include "../include/Shape.hpp"
namespace CustomShapes {
MyTriangle::MyTriangle() {}
void MyTriangle::draw() {
  DrawTriangle({650, 240},  // Top vertex
               {590, 360},  // Bottom-left vertex
               {710, 360},  // Bottom-right vertex
               DARKPURPLE);
}
}  // namespace CustomShapes