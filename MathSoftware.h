//
// Created by Carsen Ball on 9/15/18.
//

#ifndef ESOF_2_MATHSOFTWARE_H
#define ESOF_2_MATHSOFTWARE_H

class MathSoftware
{
public:
    virtual void mathSort(int, int[]) = 0;
};

class MTool: public MathSoftware
{
private:
  void subarray(int * arr, int * sub, int high, int low);
  void merge(int * sub1, int sub1_size,
             int * sub2, int sub2_size,
             int * retarr);
public:
    MTool();
    void mathSort(int, int[]);
};

class Mathematica: public MathSoftware
{
public:
    Mathematica();
    void mathSort(int, int[]);
};

class MyMath: public MathSoftware
{
public:
    MyMath();
    void mathSort(int, int[]);
};

#endif //ESOF_2_MATHSOFTWARE_H
