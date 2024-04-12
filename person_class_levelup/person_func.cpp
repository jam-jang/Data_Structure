#include "person.h"

Person::Person() //문자열 초기화 방법, "NULL" -> 잘못된 초기화
{
    name=""; 
    age=0;
    occupation="";
}

void Person::set()
{
    std::cout << "Name: ";
    std::cin >> name;
    
    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Occupation: ";    
    getline(std::cin,occupation);
}

Person::~Person()
{
    std::cout<< "GoodBye " << name << std::endl; 
}

Person::Person(std::string name,int age, std::string occupation) : name(name), age(age), occupation(occupation)// 밑에 주석 같음
{
    // this->name = name;
    // this->age = age;
    // this->occupation = occupation;
}

void Person::displayInfo()
{
    std::cout << "Name: " << name << " ";
    std::cout << "Age: " << age << " ";
    std::cout << "Occupation: " << occupation << " ";
    std::cout << std::endl;

}

void Person::wishGoodDay()
{
    std::cout << "Have a good day, " << name <<"!" << std::endl;
}


