#include <iostream>

int main() {
	std::cout << "Input Max Fib Number: ";
	int maxFib = 0;
	std::cin >> maxFib;

	int curr = 1;
	int prev = 0;
	while (curr <= maxFib) {
		std::cout << curr << ", ";
		int newPrev = curr;
		curr += prev;
		prev = newPrev;
	}
	std::cout << std::endl;
}
