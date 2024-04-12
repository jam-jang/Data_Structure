#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<iostream>
#include<string>

class Student{

private:
    std::string name;
    int age;
    std::string school;

public:
    Student(); // default생성자는 매개변수가 없다. 반환값 없고 클래스명과 같다.
    void set();

    
    void pirntlnfo();   
    ~Student(); // default 소멸자이다. 
};
#endif