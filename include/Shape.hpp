#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
using namespace std;
class Shape {
 protected:
  int sides;

 public:
  Shape();
  void draw(int s);
};

#endif