#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <raylib.h>

#include <iostream>
using namespace std;
#include "./Shape.hpp"
namespace CustomShapes {
class Circle : public Shape {
 public:
  Circle();
  void draw();
};
}  // namespace CustomShapes
#endif