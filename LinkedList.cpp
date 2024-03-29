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


bool LinkedList::deleteLast(){

  if(head == nullptr)
    return false;

  Node *prev,*curr = head;
  
  while (curr->next != nullptr){
    prev = curr;
    curr = curr->next;
  }

  prev->next = nullptr;
  delete curr;
    
}

void LinkedList::printList(){
  Node* curr = head;

  std::cout<<std::endl<<"Printing List "<<__FILE__<<" "<<__FUNCTION__<<std::endl;
  
  while(curr != nullptr){
    std::cout<<curr->i<<" ";
    curr = curr->next;
  }

  std::cout<<std::endl;
    
}

