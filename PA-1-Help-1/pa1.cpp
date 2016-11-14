// #include "pa1.h"
#include <iostream>


int main() {
  int size = 0;
  for (;;) {
    double tempIn = 0;
    std::cout << "Plz entr nubrrrrrr: ";
    std::cin >> tempIn;
    // Erases any String
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    // Check if in is zero
    if (tempIn == 0) {
      std::cout << "Stop Entering Text >:(" << std::endl;
    } 
    else if (tempIn != (int)tempIn) {
      std::cout << "You entered a decimal meanie" << std::endl;
    } 
    else {
      size = tempIn;
      // check that size is within range and odd

      // only if valid...
      break;
    }
  }

  std::cout << "The final nice variable:" << size;

}

// int myHelperMethod() {
//   return 1;
// }

// MagicMaker::MagicMaker(int size) {
//   this->size = size;
//   makeMagic();
// }

// void MagicMaker::makeMagic() {
//   int curr = size / 2;
// }
