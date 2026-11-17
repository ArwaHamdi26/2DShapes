#include <iostream>
using namespace std;
#include "../include/MySquare.hpp"
#include "../include/Shape.hpp"
namespace CustomShapes {
MySquare::MySquare() { sides = 0; }
void MySquare::draw() { DrawRectangle(350, 40, 120, 120, DARKGREEN); }
}  // namespace CustomShapes