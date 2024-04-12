#ifndef __PERSON_H__
#define __PERSON_H__
#include<iostream>

class Person{

private:
    std::string name;
    int age;
    std::string occupation;//직업

public: 
    //자동 생성 자동 소멸됨
    Person(); //default는 인스턴스 변수에 초기화 할게 없는 경우 사용한다. //입력 받을 시 사용
    void set();

    Person(std::string name, int age, std::string occupation);

    void displayinfo();
    void wishGoodDay();

    ~Person(); //헤더에서 함수는 위치 상관없음
};
#endif