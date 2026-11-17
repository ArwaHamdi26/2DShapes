#include "../include/Circle.hpp"

#include <raylib.h>

#include <iostream>
using namespace std;
#include "../include/Shape.hpp"
namespace CustomShapes {
Circle::Circle() { cout << "circle created" << endl; };
void Circle::draw() { DrawCircle(200, 300, 60, MAROON); }
}  // namespace CustomShapes