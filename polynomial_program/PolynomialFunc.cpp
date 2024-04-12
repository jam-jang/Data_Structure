#include "Polynomial.h"

Polynomial::Polynomial() : coef{} // 계수 초기화
{
    degree = 0; //차수 초기화
}

Polynomial::~Polynomial() 
{
   // cout << "deconstructor" << endl;
}

void Polynomial::read() 
{
	std::cin >> degree;  // 차수 입력 받기

	for (int i = degree; i >= 0; i--) // 입력 받은 차수를 감소시키고 0일때 까지 반복
		std::cin >> coef[i]; // 계수에 
}


void Polynomial::sub(Polynomial a, Polynomial b)
{	
	int i;
	// a와b 중 최고차항의 차수가 더 큰지에 대해 반복문의 반복 횟수가 달리지기 때문에 최고차항의 차수를 비교하였음
	if(b.degree > a.degree) // a의 최고차항이 작을 경우
	{
		this->degree=b.degree; // d최고차항의 차수에 b최고차항의 차수를 대입시켜줌
		for(i=0; i<= b.degree; i++) // d 랑 b가 같기에 for조건식에 this->degree사용해도 된다. b의 최고차항 보다 작거나 같을 때 까지 반복
		{
			this->coef[i]=a.coef[i]-b.coef[i]; //현재 객체의 계수 배열에 a와 b의 계수의 차를 저장시킴
		}
	}
	else // a의 최고차항이 b의 최고차항보다 클 경우
	{
		this->degree=a.degree; // 현재 객체의 치고차항의 차수를 a의 최고차항의 차수로 설정
		for(i=0; i<= a.degree; i++)// a의 최고차항의 차수보다 작거나 같을 때 까지 반복
		{
			this->coef[i]=a.coef[i]-b.coef[i]; //현재 객체의 계수 배열에 a와b의 계수 차를 저장
		}
	}
}

void Polynomial::mult(Polynomial a, Polynomial b)
{
	int i,j;
	this->degree = a.degree + b.degree; //d의 최고차항 차수에 a,b의 최고차항의 차수를 더한 값을 대입
	for(i=0; i<=a.degree; i++)//a 와 b에서 각각 최고차항의 차수까지 반복해야하므로   중첩반복문을 사용함
	{
		for(j=0; j<=b.degree; j++)
		{
			this->coef[i+j] += a.coef[i]*b.coef[j];//d의 인덱스 i,j를 더한 항에 계수의 합을 누적해서 저장시킴
		}
	}

}

void Polynomial::trim()
{
	int i;
	for(i=this->degree; i>=0; i--) //최고차항이 0일 때를 찾아야 하므로 최고차항을 감소시키면서 반
	{
		if(this->coef[i]==0)// 최고차항의 개수가 0이면 
		{
			this->degree--; //degree값을 감소시키고 반복해준다.
		}
		else
		{
			break; // 아니면 반복문을 빠져나온다.
		}
	}
}

void Polynomial::display() {
	int i;

	for (i = degree; i > 0; i--)//받은 값을 역순으로 출력
	 {
		if (coef[i])
		 {
			if (i != degree) // 최고창항인지 구분하고 아니면 +를 출력시킴
				std::cout << " + ";
			if (coef[i] == 1)// 계수가 1인 경우 x^1만 출력
				std::cout << "x^" << i;
			else // 그 외의 경우 계수와 함께 x^1 출력
				std::cout << coef[i] << "x^" << i;
		}
	}
	if (coef[0]) // 상수항이 있을 경우 그 값을 출력
		std::cout << " + " << coef[0];
		
	std::cout << std::endl;
}