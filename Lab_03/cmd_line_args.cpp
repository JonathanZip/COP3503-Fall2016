#include <iostream>

int main(const int argc, const char **argv) {
  std::string *cppArgs = new std::string[argc];
  for (int i=0; i != argc; ++i) {
    cppArgs[i] = std::string(argv[i]);
  }
  if (argc == 2) { // make sure user put correct number of args.
    if( cppArgs[1] == "worst" ) {
      // do worst
    } else if (cppArgs[1] == "best" ) {
      // do best
    } else {
      // error
    }
  }
}
