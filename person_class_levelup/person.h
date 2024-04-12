#ifndef __PERSON_H__ // 헤더파일 중복 방지
#define __PERSON_H__

#include <iostream>
#include <string>

class Person{

private: 
    std::string name;
    int age;
    std::string occupation;

public:
    //원형 선언만 한다.
    Person(); //생성자에 매개변수가 없으면 default 생성자라고 부른다. 
    void set();
    ~Person();

    Person(std::string name,int age,std::string occupation);

    void displayInfo();
    void wishGoodDay();

};
#endif