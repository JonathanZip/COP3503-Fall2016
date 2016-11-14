#include <iostream>

int main() {
  int arr[15][15] = {};
  // start our magic square
  int x = size/2;
  int y = size-1;
  int count = 1;
  arr[x][y] = count++;
  while (count <= 15*15) {
    int xTemp;
    int yTemp;
    moveUpRight(15, x, y, xTemp, yTemp);
    if (arr[xTemp][yTemp] == 0) {
      x = xTemp;
      y = yTemp;
      arr[x][y] = count++;
    } else {
      moveDown(15, y, yTemp);
      if (arr[x][yTemp] == 0) {
        y = yTemp;
        arr[x][y] = count++;
      }
    }
  }

}

// here we assume "up" is adding to y, and right, is adding to x.
void moveUpRight(int size, int x, int y, int &newX, int &newY) {

}

void moveDown(int size, int y, int &newY) {

}
