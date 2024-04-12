#include "person.h"

int main()
{
    Person p;
    p.set();

    p.displayinfo();
    p.wishGoodDay();
    std::cout << std::endl;
    
    Person p1("justin",23,"student");
    p1.displayinfo();
    p1.wishGoodDay();

    return 0;
}   