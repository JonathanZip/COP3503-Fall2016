#include <iostream>

int main() {
  int input = 0;
  std::cout << "Please input a size for the array: ";
  std::cin >> input;
  
  int *arr = new int[input];
  for (int i=0; i!=input; ++i) {
    arr[i] = 0;
  }

  delete [] arr;

}
