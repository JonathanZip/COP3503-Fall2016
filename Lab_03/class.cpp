#include "class.h"

void modifyFooJK(Foo foo) {
  foo.increment();
}

void modifyFooWithPtr(Foo *foo) {
  foo->increment();
}

void modifyFooWithRef(Foo &foo) {
  foo.increment();
}

int main() {
  // create object by value
  Foo foo(13);
  modifyFooJK(foo);
  modifyFooWithPtr(&foo);
  modifyFooWithRef(foo);
}

Foo::Foo() {
}

Foo::Foo(int startValue) {
  this->fooCounter = startValue;
}

void Foo::increment() {
  ++fooCounter;
}
