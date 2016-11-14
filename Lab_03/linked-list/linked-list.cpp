#include "linked-list.h"

int main() {
  LinkedList *ll = new LinkedList();
  for (int i = 0; i != NUM_PAGES; ++i) {
    ll->insert("FREE");
  }
  ll->print();
}

void LinkedList::print() {
  Node *curr = head;
  int count = 1;
  while (curr) {
    std::cout << curr->prog << "\t";
    if (count % 8 == 0) {
      std::cout << std::endl;
    }
    ++count;
    curr = curr->next;
  }
}

Node::Node(std::string prog) {
  this->prog = prog;
}

void LinkedList::insert(const std::string prog) {
  if (head == nullptr) {
    head = new Node(prog);
    return;
  }
  Node *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  // our temp now points to the last node
  // in the chain
  temp->next = new Node(prog);
}
