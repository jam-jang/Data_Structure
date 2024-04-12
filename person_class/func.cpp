#include "person.h"

Person::Person()
{
    
}

Person::Person(std::string name, int age, std::string occupation)
{
    this->name = name;
    this->age = age;
    this->occupation = occupation;
}

void Person::set()
{
    std::cin >> name;
    std::cin >> age;
    std::cin >> occupation;
}

void Person::displayinfo()
{
    std::cout << name << ' ' << age << ' ' << occupation << std::endl;
}

void Person::wishGoodDay()
{
    std::cout << "Have a good day, " << name << "!" << std::endl;
}

Person::~Person()
{
    
}