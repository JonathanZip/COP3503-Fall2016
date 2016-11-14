#ifndef PA1_OUTLINE_H
#define PA1_OUTLINE_H

#define MAX_SIZE 15

#include <iostream>
class MagicSquarer {
private:
  int arr[MAX_SIZE][MAX_SIZE] = {}; // doing this ensures everything is zeroed.
  const int size;

public:
  MagicSquarer(int size);
  // printSquare prints an output of the square.
  void printSquare();
  // checkSums prints the output of the rows summed
  void checkSums();
  // rotate returns a new magic square that has been rotated clockwise.
  MagicSquarer rotate();
};

#endif
