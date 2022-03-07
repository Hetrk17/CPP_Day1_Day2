#include <iostream>  
using namespace std;

int sum(int a, int b)
{
	return a+b;
}


int sum(int a, int b, int c)
{
	return a+b+c;
}


float sum(float a, float b, float c)
{
	return a+b+c;
}


int main()
{
	int a,b,c;
	a = 10;
	b = 20;
	c = 30;
	cout << " A:- " << a << " B:- " << b << " C:- " << c << "\n";
	cout << "Fun1:- " << sum(a,b) << "\n";
	cout << "Fun2:- " << sum(a,b,c) << "\n";
	cout << "Fun3:- " << sum(a,b,30.5) << "\n";
}
