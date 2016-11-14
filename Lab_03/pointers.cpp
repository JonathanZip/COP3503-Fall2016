#include <iostream>

int* realWayToDoThis() {
  int *works = new int;
  *works = 12;
  return works;
}

int* danglingPointer() {
  int dangleMe = 12;
  return &dangleMe;
}

void changeMeItsOkay(int *ptr) {
  *ptr = 1337;
}

int main() {
  //int *ptr = danglingPointer();
  // here dangleMe no longer exists
  int originalVal = 12;
  std::cout << "orginal val: " << originalVal << std::endl;
  changeMeItsOkay( &originalVal );
  std::cout << "new val: " << originalVal << std::endl;
}
