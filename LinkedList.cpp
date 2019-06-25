#include "LinkedList.h"

Node::Node(int a):i(a){
  this->next = nullptr;
}

LinkedList::LinkedList(){}

bool LinkedList::insert(int a){
  if(head == nullptr){
    head = new Node(a);
    return true;
  }

  Node* curr = head;
  
  while(curr->next != nullptr)
    curr = curr->next;

  curr->next = new Node(a);

  return true;
}


bool LinkedList::deleteFirst(int *val){
  if(head == nullptr)
    return 0;
  
  Node* temp = head;
  *val = head->i;
  head = head->next;

  delete temp;  
}



int main(int argc, char *argv[]){
  LinkedList l;

  int x;
  
  l.insert(100000);
  l.deleteFirst(&x);

  std::cout<<std::endl<<"deleteFirst = "<<x<<std::endl;
}
