#include <iostream>

int main() {
	std::cout << "Please input a number: ";
	std::string input;
	std::cin >> input;
	//get input length.
	const int inLen = input.length();
	bool isPalindrome = true;
	for (int begIndex=0; begIndex < inLen/2; ++begIndex) {
		int endIndex = (inLen - 1) - begIndex;
		if (input[begIndex] != input[endIndex]) {
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome) {
		std::cout << "Input is a palindrome!" << std::endl;
	} else {
		std::cout << "Input is NOT a palindrome!" << std::endl;
	}
}
