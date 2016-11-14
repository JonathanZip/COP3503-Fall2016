#include <iostream>

void swapJK(int a, int b) {
  int oldA = a;
  a = b;
  b = oldA;
  std::cout << "Inside of function: " << std::endl;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
}

void swapPtr(int *a, int *b) {
  int oldA = *a;
  *a = *b;
  *b = oldA;
  std::cout << "Inside of function: " << std::endl;
  std::cout << "a: " << *a << std::endl;
  std::cout << "b: " << *b << std::endl;
}

void swapRef(int &a, int &b) {
  int oldA = a;
  a = b;
  b = oldA;
  std::cout << "Inside of function: " << std::endl;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
}

int main() {
  int one = 1;
  int two = 2;
  //swapJK(one, two);
  //swapPtr(&one, &two);
  swapRef(one, two);
  std::cout << "Out of function: " << std::endl;
  std::cout << "one: " << one << std::endl;
  std::cout << "two: " << two << std::endl;
}
