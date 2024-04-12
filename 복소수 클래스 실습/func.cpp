#include "complex.h"

using namespace std;

void Complex::read() {
	cin >> real >> imag;
}

void Complex::print() {
	cout << real << " + " << imag << endl;
}

void Complex::add(Complex a, Complex b) {
	real = a.real + b.real;
	imag = a.imag + b.imag;
}