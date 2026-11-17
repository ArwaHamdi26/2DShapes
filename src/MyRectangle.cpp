
#include <iostream>
using namespace std;
#include <raylib.h>

#include "../include/MyRectangle.hpp"
#include "../include/Shape.hpp"
namespace CustomShapes {
MyRectangle::MyRectangle() {}
void MyRectangle::draw() { DrawRectangle(350, 240, 180, 120, DARKBLUE); }
}  // namespace CustomShapes