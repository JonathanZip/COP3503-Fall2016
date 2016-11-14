#include <iostream>

int factorial(int n) {
  //base case
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

// 0, 1, 2, 3, 4, 5
// 1, 1, 2, 3, 5, 8
int fib(int n) {
  // base case
  if (n == 1 || n == 0) {
    return 1;
  }
  return fib(n-1) + fib(n-2);
}


int add(int n) {
  //base case
  if (n == 0) {
    return 0;
  }
  return n + add(n-1);
}

//Examples:
// sumDigits(126) -> 9
// sumDigits(49) -> 13
// sumDigits(12) -> 3
// sumDigits(3) -> 3
// 651 % 10  -> 1
// 651 / 10 -> 65
int sumDigits(int n) {
  //base case
  if (n == 0) {
    return 0;
  }
  //recursive case
  return (n % 10) + sumDigits(n / 10);
}

void recurseLoop(int i, int input) {
  if (i == input + 1) {
    return;
  }
  std::cout << i << std::endl;
  recurseLoop(i+1, input);
}

void startRecurseLoop(int input) {
  recurseLoop(0, input);
}

int main() {
  int input = 10;
  for (int i=0; i<=input; ++i) {
    std::cout << i << << std::endl;
  }
  startRecurseLoop(input);
}
