#include <iostream>

class Stack {
  int count=0;
  int arr[10] = {};
  void push(int num) {
    arr[count++] = num;
  }
  int pop() {
    return arr[--count];
  }
}

int main() {

}
