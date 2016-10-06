#include "class.h"

void modifyCircle(Circle c) {
  c.setRadius(10.5);
  std::cout << "in function: " << std::endl;
  std::cout << "Circle Radius is: " << c.getRadius() << std::endl;
}

void modifyCirclePtr(Circle *c) {
  c->setRadius(10.5);
  std::cout << "in function: " << std::endl;
  std::cout << "Circle Radius is: " << c->getRadius() << std::endl;
}

int main() {
  Circle c(6.7);
  modifyCirclePtr(&c);
  std::cout << "in main: " << std::endl;
  std::cout << "Circle Radius is: " << c.getRadius() << std::endl;
}


Circle::Circle(double radius) {
  this->radius = radius;
}

double Circle::getRadius() {
  return radius;
}

double Circle::getArea() {
  return 3.141592654 * radius * radius;
}

void Circle::setRadius(double radius) {
  this->radius = radius;
}
