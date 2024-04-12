#include"complex.h"

int main()
{
	Complex a, b, c;
	
	a.read();
	b.read();
	c.add(a, b);
	a.print();
	b.print();
	c.print();
	
	return 0;
}