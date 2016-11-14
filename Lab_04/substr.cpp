#include <iostream>

int main() {
  std::string breakdown = "this is an example sentence";
  std::size_t index = breakdown.find(" ");
  while (index != std::string::npos) {
    std::string newString = breakdown.substr(0, index);
    std::cout << "string breakdown is: " << newString << std::endl;
    breakdown = breakdown.substr(index + 1);
    index = breakdown.find(" ", 1);
  }
  std::cout << "string breakdown is: " << breakdown << std::endl;
}
