#include <iostream>

int main() {
	std::cout << "Input a Pair of Numbers: ";
	int in1 = 0; 
	int in2 = 0;
	std::cin >> in1 >> in2;
	int gcd = 0;
	for (int div = in1; div > 0; --div) {
		int rem1 = in1 % div;
		int rem2 = in2 % div;
		if (rem1 == 0 && rem2 == 0) {
			gcd = div;
			break;
		}
	}
	std::cout << "The GCD is: " << gcd << std::endl;
}
