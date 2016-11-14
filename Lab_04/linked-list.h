#include <iostream>

class LinkedList {
  Node *first = NULL;

  LinkedList(int size) {
    first = new Node();
    Node *curr = first;
    for (int count=1; count <= size; ++count) {
      Node *newNode = new Node();
      curr->next = newNode;
      curr = newNode;
    }
  }

  int get(int index) {

  }

  void add() {
    Node *newNode = new Node();
    if (first) {
      // do some code here
    } else {
      first = newNode;
    }
  }
}

class Node {
public:
  int data;
  Node *next;
}
