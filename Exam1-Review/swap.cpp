#include <iostream>

// Doesn't work
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// DOES work
void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int one = 1;
	int two = 2;
	swap(one, two);
	swap2(cPtr, &d);
}
