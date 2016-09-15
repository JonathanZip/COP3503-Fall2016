#include <iostream>

// ...max size of 15.

#define MAX_SIZE 15

int main() {
  // take in our user's input size
  std::cout << "Please enter number of inputs: ";
  int inputSize;
  std::cin >> inputSize;

  /* check that input size is within range */

  // declare our 2D array.
  int arr2D[MAX_SIZE][MAX_SIZE];
  int counter=1;

  // fill in the array, pretending it's inputSize
  for (int i=0; i < inputSize; ++i) {
    for (int j=0; j < inputSize; ++j) {
      arr2D[i][j] = counter;
      ++counter;
    }
  }

  // printing out the array, pretending its inputSize.
  for (int i=0; i < inputSize; ++i) {
    for (int j=0; j < inputSize; ++j) {
      std::cout << arr2D[i][j] << "\t";
    }
    std::cout << std::endl;
  }
}
