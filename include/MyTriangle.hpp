#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include <iostream>
using namespace std;
#include <raylib.h>

#include "./Shape.hpp"
namespace CustomShapes {
class MyTriangle : public Shape {
 public:
  MyTriangle();
  void draw();
};
}  // namespace CustomShapes
#endif