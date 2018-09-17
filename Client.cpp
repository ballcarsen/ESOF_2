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
    std::cout<<arr[i]<<" ";
  }
  std::cout<<"\n"<<std::endl;
}

int main(){


  int input = -1;

  //Prompts user for the first strategy to use
  while(input < 0 || input > 2){
    std::cout << "Choose a default sort strategy" << std::endl;
    std::cout << "0 for Mathematica" << std::endl;
    std::cout << "1 for MTool" << std::endl;
    std::cout << "2 for MyMath\n" << std::endl;
    std::cin >> input;
    std::cout <<""<<std::endl;
    if(input < 0 || input > 2){
      std::cout<<"Selection must be 0, 1, or 2. Please Try Again.\n"<<std::endl;
    }
  }
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
      std::cout<<"Mathematica Selected."<<std::endl;
      c.setSortStrategy(ms1);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort);

      std::cout<<"Switching to MTool..."<<std::endl;
      c.setSortStrategy(ms2);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      break;
    }
    case 1:
      {
      MathSoftware *ms2 = new MTool();
      MathSoftware *ms3 = new MyMath();
      std::cout<<"MTool Selected."<<std::endl;
      c.setSortStrategy(ms2);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort);

      std::cout<<"Switching to MyMath..."<<std::endl;
      c.setSortStrategy(ms3);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      break;
    }
    case 2:
      {
      MathSoftware *ms3 = new MyMath();
      MathSoftware *ms1 = new Mathematica();
      std::cout<<"MyMath Selected."<<std::endl;
      c.setSortStrategy(ms3);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort);
      c.mathSort(size, to_sort);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort);

      std::cout<<"Switching to Mathematica..."<<std::endl;
      c.setSortStrategy(ms1);

      std::cout<<"Unsorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      c.mathSort(size, to_sort_1);
      std::cout<<"Sorted Array:"<<std::endl;
      print_arr(size, to_sort_1);
      break;
    }
  }
}
