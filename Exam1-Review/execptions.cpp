#include <stdexcept>
#include <iostream>

int divide(int top, int bottom) {
  if (bottom == 0) {
    throw std::invalid_argument("You tried to bottom by zero!");
  }
}

int main() {
  // divide(12, 0);
  try {
    divide(12, 0);
  } catch (std::exception e) {
    std::cout << "Exception occured!" << std::endl;
  }

}
