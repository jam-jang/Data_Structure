#include "person.h"

int main()
{
    Person p1;
    p1.set();
    p1.displayInfo();
    p1.wishGoodDay();

    Person p2("justin",33,"taxi driver");
    p2.displayInfo();
    p2.wishGoodDay();

    return 0;
}

