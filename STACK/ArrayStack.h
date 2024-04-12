#ifndef __ARRAYSTACK_H__
#define __ARRAYSTACK_H__

#include<iostream>
#define ARRAY_SIZE 6

class ArrayStack{

public:
    int data[ARRAY_SIZE]; //요소의 배열
    int top;  // 요소의 개수
    
public:
    ArrayStack();
    ~ArrayStack();

    void push(int num); //삽입
    int pop(); //삭제
    int peek(); // 꼭대기 값

    bool isEmpty();
    bool isFull();

    void display();

};
#endif