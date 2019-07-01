#include "LinkedList.h"
#include "BubbleSort.h"

using namespace std;

void printOptions(){
  cout<<"What would you like to do:"<<endl;
  cout<<"1) BubbleSort"<<endl;
  cout<<"2) LinkedList"<<endl;
}

void BubbleSortRun(){
  cout<<"BubbleSort"<<endl;
  BubbleSort bs;
  bs.printElem();
  bs.sort();
  bs.printElem();
  
  
}

bool LinkedListRun(){
  LinkedList l;
  int i,x,count=0;
  
  l.printList();
  
  cout<<"Linked List. Enter 10 numbers. Press enter after each number"<<endl;
  
  while(count!=10){
    cin>>i;
    l.insert(i);
    count++;
  }

  l.printList();
  
  //l.deleteFirst(&x);
  l.deleteLast();
  l.printList();
  //cout<<endl<<"deleteFirst = "<<x<<endl;
}

bool run(){

  int option;
  cin>>option;

  switch(option){
  case 1: BubbleSortRun();
    break;
  case 2: LinkedListRun();
    break;
  default:
    break;    
  }
}



int main(int argc, char *argv[]){
 
  printOptions();

  return run();

}
  
 

