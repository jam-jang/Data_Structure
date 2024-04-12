#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <iostream>

class Complex {        
private:
	double real;
	double imag;
public:
	void read();
	void print();
	void add(Complex a, Complex b);
};

#endif
