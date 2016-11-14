#include <iostream>

int main() {
  std::string breakdown = "this is an example sentence";
  std::size_t old = 0;
  std::size_t index = breakdown.find(" ");
  while (index != std::string::npos) {
    std::string newString = breakdown.substr(old, index-old);
    std::cout << "string breakdown is: " << newString << std::endl;
    old = index+1;
    index = breakdown.find(" ", index+1);
  }
  std::cout << "string breakdown is: " << breakdown.substr(old, index-old) << std::endl;
}
