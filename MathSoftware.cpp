//
// Created by Carsen Ball on 9/15/18.
//

//An interface to implement different sorting techniques
class MathSoftware
{
public:
    virtual void mathSort(int, int[]);
};

//Inherits from MathSoftware, mathSort will sort an array using merge sort
class MTool: public MathSoftware
{
public:
    //Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
    void mathSort(int size, int[] arr)
    {
    }
};

//Inherits from MathSoftware, mathSort will sort an array using insertion sort
class Mathematica: public MathSoftware
{
public:
    //Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
    void mathSort(int size, int[] arr)
    {

    }
};

//Inherits from MathSoftware, mathSort will sort an array using bubble sort
class MyMath: public  MyMath
{
public:
    //Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
    void mathSort(int size, int[] arr)
    {

    }
};
