#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define NUM_PAGES 32
#define PAGE_SIZE_KB 4

#include <iostream>

struct Node {
  std::string prog;
  Node *next = nullptr;
  Node(std::string prog);
};

class LinkedList {
  // private because in class
  Node *head = nullptr;
public:
  void insert(std::string prog);
  void print();
};

#endif
