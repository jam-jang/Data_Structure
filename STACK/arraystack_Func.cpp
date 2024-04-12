#include "ArrayStack.h"

ArrayStack::ArrayStack() : data{} //배열 초기화 
{
    //data[ARRAY_SIZE] = {0,}; // 사용가능
    top = -1;
}

ArrayStack::~ArrayStack()
{

}

void ArrayStack::push(int num)
{
    if(isFull())
    {
        std::cout << "Stack is FULL" << std::endl;
        //exit(1); //프로그램 강제 종료
    }
    else
    {
        top++;
        data[top]=num;
        // data[++top]=num; 
    }
}

int ArrayStack::pop()  // 반환값이 있어야 한다.
{
    if(isEmpty())
    {
        std::cout << "Stack is EMPTY" << std::endl;
        return -1; //오류가 있으면 -1 사용 문제가 있어서 종류한다는 의미
        // 0으로 반환하면 정장 종료된다.
    }
    else
    {
        int temp=data[top];
        top--;
        return temp;
    }
}

int ArrayStack::peek() //꼭대기 값 반환
{
    return data[top];
}

bool ArrayStack::isEmpty()
{
    // if(top==-1)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return top==-1;
}

bool ArrayStack::isFull()
{
    // if(top==ARRAY_SIZE-1)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return top==ARRAY_SIZE-1;
}

void ArrayStack::display()
{

    int i;
    for(i=0; i<=top; i++)
    {
        std::cout << data[i] << std::endl;
    }
}