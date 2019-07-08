#include "SpiralPrint.h"

using namespace std;

SpiralPrint::SpiralPrint(){
  for(int i=0 ; i<4 ; i++){
    for(int j =0 ; j<4 ; j++){
      arr[i][j]=i;
    }
  }
}


void SpiralPrint::printArray(){
  for(int i=0 ; i<4 ; i++){
    for(int j =0 ; j<4 ; j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }
}

void SpiralPrint::printSpiral(){
  // cout<<arr[0][0];
  // cout<<arr[0][1];
  // cout<<arr[0][2];
  // cout<<arr[0][3];
  // cout<<arr[1][3];
  // cout<<arr[2][3];
  // cout<<arr[3][3];
  // cout<<arr[3][2];
  // cout<<arr[3][1];
  // cout<<arr[3][0];
  // cout<<arr[1][1];

  int f=0,s=0;
  
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout<<arr[f][s];
      s++;
    }
    f++;
    s--;
    
  }

 
}




