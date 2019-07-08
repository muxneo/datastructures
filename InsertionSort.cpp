#include "InsertionSort.h"

using namespace std;
InsertionSort::InsertionSort(){
  cout<<endl<<"Enter 10 numbers";
  int i = 0;

  while(i<10){
    cin>>elem[i];
    i++;
  }
}

void InsertionSort::sortDescending(){
  int mark=0;
  for(int j = 1; j<sizeof(elem)/sizeof(elem[0]); j++){
    for(int i = j-1; i>0; i--){
      //checkAndSwap(i,j);
      if(elem[j] > elem[i]){
	swap(j,i);
      }
	
    }
  }
}

void InsertionSort::sortAscending(){
  int mark=0;
  for(int j = 1; j<sizeof(elem)/sizeof(elem[0]); j++){
    for(int i = j-1; i>0; i--){
      //checkAndSwap(i,j);
      if(elem[j] < elem[i]){
	swap(j,i);
      }
	
    }
  }
}

void InsertionSort::printElem(){
  int i = 0;

  while(i<10){
    cout<<endl;
    cout<<elem[i++];
  }

  cout<<endl;
}

// bool InsertionSort::checkAndSwap(int i,int j){
//   do{
    
//   }while(elem[j]>elem[i])
// }


bool InsertionSort::shiftAndSwap(int j,int i){
  int temp = j;  
}

void InsertionSort::swap(int a, int b){
  elem[a] = elem[a]+elem[b];
  elem[b] = elem[a]-elem[b];
  elem[a] = elem[a]-elem[b];
}
