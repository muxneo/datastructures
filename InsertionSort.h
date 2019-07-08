#include <iostream>

class InsertionSort{
 private:
  int elem[10];
  

 public:
  InsertionSort();
  void printElem();
  void sortAscending();
  void sortDescending();
  //bool checkAndSwap(int i, int j);
  bool shiftAndSwap(int j, int i);
  void swap(int a, int b);
};
