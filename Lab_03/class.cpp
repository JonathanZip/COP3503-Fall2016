#include "class.h"

Circle::Circle(double radius) {
  this->radius = radius;
}

double Circle::getRadius() {
  return radius;
}

double Circle::getArea() {
  return 3.141592654 * radius * radius;
}
