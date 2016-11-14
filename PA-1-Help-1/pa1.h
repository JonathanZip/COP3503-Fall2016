#define MAX_SIZE 15

#include <iostream>

int myHelperMethod();

class MagicMaker {
private:
  int size;
  int arr[MAX_SIZE];
  void makeMagic();

public:
  MagicMaker(int size);
  void print();
};
