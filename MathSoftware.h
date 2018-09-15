//
// Created by Carsen Ball on 9/15/18.
//

#ifndef ESOF_2_MATHSOFTWARE_H
#define ESOF_2_MATHSOFTWARE_H

#endif //ESOF_2_MATHSOFTWARE_H

class MathSoftware
{
public:
    virtual void mathSort(int, int[]) = 0;
};

class MTool: public MathSoftware
{
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