#include <iostream>

class Person {
  int age;
  std::string name;
public:
  Person(int age, std::string name) {
    this->age = age;
    this->name = name;
  }
  int getAge() const {
    return age;
  }

  void setAge(int age) {
    this->age = age;
  }
};

int main() {
  const Person max(22, "Max");
  max.getAge();
  max.setAge(21);
}
