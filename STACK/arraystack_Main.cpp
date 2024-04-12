#include "ArrayStack.h"

int main()
{
    ArrayStack test;
    int show;

    test.push(100);
    test.push(200);
    test.push(500);
    test.display();
    
    std::cout << "------------------------------------------" << std::endl;

    show = test.peek();
    std::cout << show << std::endl; 

    show = test.pop();
    std::cout << show <<std::endl;

    std::cout << "------------------------------------------" << std::endl;

    test.display();

    return 0;
}