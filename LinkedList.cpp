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

int main(int argc, char *argv[]){
  LinkedList l;
  int i,x,count=0;

  l.printList();
  
  std::cout<<"Linked List. Enter 10 numbers. Press enter after each number"<<std::endl;
  
  while(count!=10){
    std::cin>>i;
    l.insert(i);
    count++;
  }

  l.printList();
  
  //l.deleteFirst(&x);
  l.deleteLast();
  l.printList();
  //std::cout<<std::endl<<"deleteFirst = "<<x<<std::endl;
}
