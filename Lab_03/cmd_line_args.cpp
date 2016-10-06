#include <iostream>

int main(const int argc, const char **argv) {
  std::string *cppArgs = new std::string[argc];
  for (int i=0; i != argc; ++i) {
    cppArgs[i] = std::string(argv[i]);
  }
  // sweet! Now we have those nasty cstrings as c++ strings!
  for (int i=0; i != argc; ++i) {
    std::cout << "argv[" << i << "] = " << cppArgs[i] << std::endl;
  }
}
