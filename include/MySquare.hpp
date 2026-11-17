#ifndef SQUARE_HPP
#define SQUARE_HPP
#include <iostream>
using namespace std;
#include <raylib.h>

#include "./Shape.hpp"
namespace CustomShapes {
class MySquare : public Shape {
 public:
  MySquare();
  void draw();
};
}  // namespace CustomShapes
#endif