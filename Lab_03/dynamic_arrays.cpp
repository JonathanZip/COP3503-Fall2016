#include <iostream>

int main() {
	// a static array with specifier. anything not specifically given is zeroed.
  int static_arr[15] = {0, 1, 2};

	// note: No guarantee that everything is zeroed.
  int *arr = new int[3];

	// two statements below are equivalent, since dereferencing the first element
	// is the same thing as accessing the element at index 0.
  *arr = 3;
  arr[0] = 3;
	// fill in the third item.
  arr[2] = 4;
}
