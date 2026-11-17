#include <iostream>
using namespace std;
#include "../include/Shape.hpp"
class Triangle : public Shape {
 private:
  int base;
  int height;

 public:
  Triangle() {
    sides = 0;
    base = 0;
    height = 0;
  }
  void draw(int s, int b, int h) {
    sides = s;
    base = b;
    height = h;
    cout << "Drawing a Triangle" << endl;
  }
};