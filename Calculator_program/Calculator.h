#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include<iostream>

class Calculator{

private: //접근 불가
    int num1,num2;

public: //접근 가능
    void set(int a,int b);
    int sub();
    double div();
};

#endif