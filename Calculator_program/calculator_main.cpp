#include "Calculator.h"

int main()
{
    Calculator cal;
    
    int num1,num2;
    std::cout << "input two integers: ";
    std::cin >> num1 >> num2;

    int re1=0;
    double re2=0.0;

    cal.set(num1,num2);
 
    re1=cal.sub();
    std::cout << "sub result: " ;
    std::cout << re1 << std::endl;

    if(num2)
    {
        re2=cal.div();
        std::cout << "div result: " ;
        std::cout << re2 << std::endl;
    }
    else
    {
        std::cout << "ERROR" << std::endl;
    }

    return 0;
}