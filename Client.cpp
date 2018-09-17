//import MathSoftware classes
#include "MathSoftware.h"
#include "iostream"


//Class represents a client interaction
class Client{
private:
  MathSoftware * ms;

/*Changes the sort strategy that the Client will use
 * param:MathSoftware - instances of MathSoftware representing the desired technique to use
 */
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


  int input;

  //Prompts user for the first strategy to use
  std::cout << "Choose a default sort strategy" << std::endl;
  std::cout << "0 for Mathematica" << std::endl;
  std::cout << "1 for MTool" << std::endl;
  std::cout << "2 for MyMath\n" << std::endl;
  std::cin >> input;
  std::cout <<""<<std::endl;
  Client c;
/*
  MathSoftware * ms1 = new Mathematica();
  MathSoftware * ms2 = new MTool();
  MathSoftware * ms3 = new MyMath();*/

  //Size of array
  int size = 5;
  //First array to be sorted
  int to_sort[] = {4, 8, 3, 4, 6};
  //Second array to be sorted
  int to_sort_1[] = {4, 8, 3, 4, 6};

  /*Sets the sort strategy to the one chosen by the user
  *Prints unsorted array, sorts array, prints sorted array
  * After first array is sorted, sorts the second array using a different sort strategy
  */
  switch (input) {
    case 0:
      {
      MathSoftware *ms1 = new Mathematica();
      MathSoftware *ms2 = new MTool();
      c.setSortStrategy(ms1);

      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      print_arr(size, to_sort);

      c.setSortStrategy(ms2);

      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      print_arr(size, to_sort_1);
      break;
    }
    case 1:
      {
      MathSoftware *ms2 = new MTool();
      MathSoftware *ms3 = new MyMath();
      c.setSortStrategy(ms2);

      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      print_arr(size, to_sort);

      c.setSortStrategy(ms3);

      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      print_arr(size, to_sort_1);
      break;
    }
    case 2:
      {
      MathSoftware *ms3 = new MyMath();
      MathSoftware *ms1 = new Mathematica();
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
}
