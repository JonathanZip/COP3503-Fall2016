#include <iostream>

struct Node {
  Node *next;
  std::string programName;
  bool isFree;
}

class LinkedList {
  Node *start;
public:
  LinkedList(int numNodes);
  Page* get(int i);
}

int fakeMain() {
  LinkedList ll(32);

}
