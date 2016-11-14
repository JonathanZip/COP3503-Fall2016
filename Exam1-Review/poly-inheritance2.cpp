#include <iostream>

class Animal {
public:
	virtual void makeNoise() = 0;

	void makeNoise(int numTimes) {
		for (int i=0; i<numTimes; ++i) {
			makeNoise();
		}
	}
};

class Cow: public Animal {
public:
	// Overriding
	void makeNoise() {
		std::cout << "Moo!!" << std::endl;
	}
};

class Lion: public Animal {
public:
	void makeNoise() {
		std::cout << "Roarrr!!!" << std::endl;
	}
};

int main() {
	Animal *animal = new Cow();
	animal->makeNoise(10);
	delete(animal);
	animal = new Lion();
	animal->makeNoise(2);
}
