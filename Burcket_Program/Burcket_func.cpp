#include "Burcket.h"

ArrayStack::ArrayStack() : data()
{
    top = -1;
}

ArrayStack::~ArrayStack()
{

}

void ArrayStack::push(char ch)
{
    if(isFull())
    {
        std::cout << "stack is full" << std::endl;
    }
    // else
    // {
    //     top++;
    //     data[top]=ch;
    // }
    data[++top]=ch;
}

char ArrayStack::pop()
{
    if(isEmpty())
    {
        std::cout << "Stack is Empty" << std:: endl;
        return -1;
    }
    // else
    // {
    //     char tmp = data[top];
    //     top--;
    //     return tmp;
    // }
    return data[top--];
}

bool ArrayStack::isEmpty()
{
     return top==-1;
}

bool ArrayStack::isFull()
{
    return top== ARRAY_SIZE-1;
}