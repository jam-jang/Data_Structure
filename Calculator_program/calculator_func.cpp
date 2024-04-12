#include "Calculator.h"

void Calculator::set(int a,int b)
{
    num1=a;
    num2=b;
}

int Calculator::sub()
{
    return num1-num2;
}

double Calculator:: div()
{
    return (double)num1/num2;
}