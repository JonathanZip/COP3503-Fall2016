#include <iostream>
#include <vector>

int main() {
  std::vector<int> myVector;
  myVector.push_back(12);
  myVector.push_back(13);
  myVector.push_back(14);
	// push to beginning of vect (i.e. .push_front)
  myVector.insert(myVector.begin(), 11);
  std::cout << "the first value of my vector: " << myVector[0] << std::endl;
}
