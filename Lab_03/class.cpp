#include "class.h"

Foo::Foo() {
}

Foo::Foo(int startValue) {
  this->fooCounter = startValue;
}

void Foo::increment() {
  ++fooCounter;
}
