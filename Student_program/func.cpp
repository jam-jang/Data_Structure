#include "st.h"
Student::Student()
{

}

void Student::set()
{
    std::cout << "name: ";
    getline(std::cin,name);

    std::cout << "age: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "school: ";
    getline(std::cin,school);
}

void Student::pirntlnfo()
{
    std::cout << name << " " << age << " " << school;
}

Student::~Student()
{

}