#include "LinkedList.h"
#include "BubbleSort.h"
#include "SpiralPrint.h"
#include "InsertionSort.h"

using namespace std;

void printOptions(){
  cout<<"What would you like to do:"<<endl;
  cout<<"1) BubbleSort"<<endl;
  cout<<"2) LinkedList"<<endl;
  cout<<"3) SpiralPrint"<<endl;
  cout<<"4) InsertionSort"<<endl;
  cout<<endl;
}

void BubbleSortRun(){
  cout<<"BubbleSort"<<endl;
  BubbleSort bs;
  bs.printElem();
  bs.sortDescending();
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

bool SpiralPrintRun(){
  SpiralPrint s;
  s.printArray();
  s.printSpiral();
}

void InsertionSortRun(){
  InsertionSort is;
  is.printElem();
  is.sortDescending();
  is.printElem();
  is.sortAscending();
  is.printElem();
}

bool run(){

  int option;
  cin>>option;

  switch(option){
  case 1: BubbleSortRun();
    break;
  case 2: LinkedListRun();
    break;
  case 3: SpiralPrintRun();
    break;
  case 4: InsertionSortRun();
    break;
  default:
    break;    
  }
}



int main(int argc, char *argv[]){
 
  printOptions();

  return run();

}
  
 

