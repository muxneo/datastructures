#include "SpiralPrint.h"

using namespace std;

SpiralPrint::SpiralPrint(){
  for(int i=0 ; i<3 ; i++){
    for(int j =0 ; j<3 ; j++){
      arr[i][j]=i;
    }
  }
}


void SpiralPrint::printArray(){
  for(int i=0 ; i<3 ; i++){
    for(int j =0 ; j<3 ; j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }
}




