#include <iostream>

#define MAX_SIZE 15

int main() {
  std::cout << "Give me a number : ";
  int num = 0;
  std::cin >> num;

  int arr[MAX_SIZE][MAX_SIZE] = {};

  int **arr2 = new int*[num];
  for (int i=0; i < num; ++i) {
    *arr2 = new int[num];
    for (int j=0; j < num; ++j) {
      arr2[i][j] = 0;
    }
  }
  //now you have a dynamic double array called arr2
}
