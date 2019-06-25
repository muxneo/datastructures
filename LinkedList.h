#include <iostream>

class Node{
 public:
  int i;
  Node* next;

  Node(int a);
};


class LinkedList{
 public:
  Node* head = nullptr;
  LinkedList();
  bool insert(int a);
  bool deleteFirst(int* val);
  int deleteLast();
  int deleteLocation(int l);
};
