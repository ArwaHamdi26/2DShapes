#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <iostream>
using namespace std;
#include <raylib.h>

#include "./Shape.hpp"
namespace CustomShapes {
class MyRectangle : public Shape {
 public:
  MyRectangle();
  void draw();
};
}  // namespace CustomShapes
#endif