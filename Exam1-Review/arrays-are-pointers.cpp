#include <iostream>

void modifyArray(int *arr) {
  arr[4] = 100;
}

void modifyStaticArray(int arr[100]) {
  arr[4] = 100;
}

int main() {
  int *arr = new int[10];
  for (int i=0; i<10; ++i) {
    arr[i] = 0;
  }

  modifyStaticArray(arr);

  int staticArray[100] = {};

  modifyArray(staticArray);
  modifyStaticArray(staticArray);



  // std::cout << "Dereferenced *arr: " << *arr << std::endl;
  // std::cout << "Dereferenced *arr: " << arr[1] << std::endl;

  int a = 2;
  int *aPtr = &a;

  modifyArray(arr); // perfectly valid!
  //modifyArray(aPtr); // a really nasty bug!


  for (int i=0; i<10; ++i) {
    std::cout << "Element[" << i <<"]: " << arr[i];
  }

}
