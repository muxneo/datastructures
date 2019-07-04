#include "BubbleSort.h"

using namespace std;

BubbleSort::BubbleSort(){
  cout<<endl<<"Enter 10 numbers"<<endl;
  int i = 0;

  while(i<10){
    cin>>elem[i++];
  }
}

void BubbleSort::printElem(){
  int i = 0;

  while(i<10){
    cout<<endl;
    cout<<elem[i++];
  }

  cout<<endl;
}

void BubbleSort::swap(int index){
  int temp;
  //cout<<"elem["<<index<<"] = "<<elem[index]<<endl;
  //cout<<"elem["<<index+1<<"] = "<<elem[index+1]<<endl;
  temp = elem[index];
  elem[index] = elem[index+1];
  elem[index+1] = temp;  
}

void BubbleSort::sortAscending(){
  int i, j;

  for(i=sizeof(elem)/sizeof(double);i>0;i--){
    for(j=0;j<i-1;j++){
      if(elem[j]>elem[j+1])
	swap(j);      
    }
  }
}

void BubbleSort::sortDescending(){
int i, j;

  for(i=sizeof(elem)/sizeof(double);i>0;i--){
    for(j=0;j<i-1;j++){
      if(elem[j]<elem[j+1])
	swap(j);      
    }
  }
}


