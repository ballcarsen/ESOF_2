//
// Created by Carsen Ball on 9/15/18.
//
#include "MathSoftware.h"

class Client{
private:
  MathSoftware * ms;

public:
  void setSortStrategy(MathSoftware * ms){
    this->ms = ms;
  }

  void mathSort(int size, int arr[]){
    ms->mathSort(size, arr);
  }
};

int main(){
  MathSoftware * ms = new MTool();
  Client c;
  c.setSortStrategy(ms);

  int size = 5;
  int arr[] = {4, 8, 3, 4, 6};
  for(int i=0; i<5; i++){
    std::cout<<arr[i]<<std::endl;
  }
  c.mathSort(size, arr);
  for(int i=0; i<5; i++){
    std::cout<<arr[i]<<std::endl;
  }
}
