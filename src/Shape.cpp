#include <iostream>
using namespace std;
#include "../include/Shape.hpp"
Shape::Shape() { sides = 0; }
void Shape::draw(int s) {
  sides = s;
  cout << "Drawing a shape" << endl;
}
