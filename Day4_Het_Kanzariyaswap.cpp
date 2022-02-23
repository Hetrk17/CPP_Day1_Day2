#include <iostream>  
using namespace std;

void swapp(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swapa(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a,b;
	a = 10;
	b = 20;
	cout << "A:- " << a << " B:- " << b;
	swapp(&a,&b);
	cout << "\nAfter swap\n"<<"A:- " << a << " B:- " << b << "\n";
	swapa(a,b);
	cout << "\nAfter swap\n"<<"A:- " << a << " B:- " << b << "\n";
}
