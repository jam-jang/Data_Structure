#ifndef __ARRAYSTACK_H__
#define __ARRAYSTACK_H__
#define ARRAY_SIZE  10

#include<iostream>
#include<string>

class ArrayStack{


private:
    int data[ARRAY_SIZE];
    int top;

public:
    ArrayStack();
    ~ArrayStack();

    void push(char ch);
    char pop();

    bool isEmpty();
    bool isFull();

};

#endif