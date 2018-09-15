#include "MathSoftware.h"
#include "iostream"

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

void print_arr(int len, int arr[]){
  for(int i=0; i<len; i++){
    std::cout<<arr[i]<<std::endl;
  }
  std::cout<<""<<std::endl;
}

int main(){

  Client c;
  MathSoftware * ms1 = new Mathematica();
  MathSoftware * ms2 = new MTool();
  MathSoftware * ms3 = new MyMath();

  int input;
  std::cout << "Choose a default sort strategy" << std::endl;
  std::cout << "0 for Mathematica" << std::endl;
  std::cout << "1 for MTool" << std::endl;
  std::cout << "2 for MyMath\n" << std::endl;
  std::cin >> input;
  std::cout <<""<<std::endl;

  int size = 5;
  int to_sort[] = {4, 8, 3, 4, 6};
  int to_sort_1[] = {4, 8, 3, 4, 6};

  switch (input) {
    case 0 :
      c.setSortStrategy(ms1);

      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      print_arr(size, to_sort);

      c.setSortStrategy(ms2);

      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      print_arr(size, to_sort_1);
      break;
    case 1:
      c.setSortStrategy(ms2);

      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      print_arr(size, to_sort);

      c.setSortStrategy(ms3);

      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      print_arr(size, to_sort_1);
      break;
    case 2:
      c.setSortStrategy(ms3);

      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      print_arr(size, to_sort);

      c.setSortStrategy(ms1);

      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      print_arr(size, to_sort_1);
      break;
  }
}
