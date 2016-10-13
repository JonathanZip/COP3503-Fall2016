#include <iostream>

int main() {
  const int a = 2;
  //a = 3; invalid
  const std::string myString("hello world!");
  //myString = "lol"; invalid

  int b = 3;
  int c = 6;

  int *bPtr0 = &b;

  const int *bPtr1 = &b;
  //*bPtr1 = 3;
  bPtr1 = &c;

  int const *bPtr2 = &b;
  //*bPtr2 = 2;
  bPtr2 = &c;

  int * const bPtr3 = &b;
  *bPtr3 = 4;
  //bPtr3 = &c; Invalid

  std::cout << "address of b: " << &b << std::endl;
  std::cout << "value of ptr4: " << ptr4 << std::endl;
  std::cout << "value that ptr4 points to: " << *ptr4 << std::endl;

  const int * const bPtr4 = &b;
  // bPtr4 = &c; Both Invalid!
  // *bPtr4 = 8;


}
