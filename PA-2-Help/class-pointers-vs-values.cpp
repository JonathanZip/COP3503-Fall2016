class TestClass {
public:
  int testVal = 0;
  TestClass(int testVal) : testVal(testVal) {}
};

int main() {
  // "reference" (most like java)
  TestClass *ptr = new TestClass(43);
  // "value" (does not exist in java)
  TestClass val(12);
  //access test val
  ptr->testVal;
  val.testVal;
}
