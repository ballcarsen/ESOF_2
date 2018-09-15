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
  
}
