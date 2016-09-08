#include <iostream>

int main() {
	std::cout << "Please input a number: ";
	int input;
	std::cin >> input;
	//std::cout << "The number we inputted was: " << input << std::endl;
	int currentDivisor = 0;
	int numberOfDivisors = 0;
	for (int i = 1; i <= input; ++i) {
		if (input % i == 0) {
			std::cout << i << ", ";
			++numberOfDivisors;
		}
	}
	std::cout << std::endl;
	if (numberOfDivisors == 2) {
		std::cout << "The number is prime!" << std::endl;
	} else {
		std::cout << "The number is NOT prime!" << std::endl;
	}
}
