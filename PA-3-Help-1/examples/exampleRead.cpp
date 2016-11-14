#include <fstream>
#include <iostream>

int main() {
	// reads and prints out the words in a way that already splits the words.
	std::ifstream file("example.txt");
	if (!file.is_open()) {
		// error! filename probz incorrect
	}

	for (int count=1;; ++count) {
		std::string nextWord;
		file >> nextWord;
		if (!file.good()) {
			break;
		}
		std::cout << "word #" << count << ": " << nextWord << std::endl;
	}

	file.close();
	return 0;
}
