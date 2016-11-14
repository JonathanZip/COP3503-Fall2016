#include <iostream>

class Animal {
public:
	// "Virtual" is similar to abstract in Java
	virtual void makeNoise() = 0;

	void makeNoise(int amountOfScreams) {
		for (int i=0; i!=amountOfScreams; ++i) {
			makeNoise();
		}
	}
};

class Zebra: public Animal {
	// use default
};


class Dog: public Animal {
public:
	void makeNoise() {
		std::cout << "Bark bark!" << std::endl;
	}
};

class Cat: public Animal {
public:
	void makeNoise() {
		std::cout << "Meow!" << std::endl;
	}
};

int main() {
	Animal *animal = new Dog();
	animal->makeNoise(12);
	delete(animal);
	animal = new Cat();
	animal->makeNoise();

	return 0;
}
