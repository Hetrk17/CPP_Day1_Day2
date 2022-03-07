#include<iostream>
using namespace std;

class A
{
    protected:
	int a1=25;
	void fun1()
	{
		cout << " A Public:- " << a1 << "\n";
	}
};

class B : public A
{
    protected:
	int a2=25;
	void fun2()
	{
		cout << " child B Public:- " << a2 << "\n";
		cout << " Perent A Public:- " << a1 << "\n";
	}
};

class C: public A
{
    
	public:
	int a3 = 50;
	void fun3()
	{
		cout << " child C Public:- " << a3 << "\n";
		cout << " Perent A Public:- " << a1 << "\n";
	}
};

//Mulpllavel
class D : public B, public C 
{
	 public:
	int a4 = 60;
	void print1()
	{
		cout << "\n\n\n Child 2\n";
		cout << "Child class:- " << a4 << "\n";
		cout << "Perent C:- " << a3 << "\n";
		//cout << "Perent A :- " << a2 << "\n"; //error
		cout << "Perent B :- " << a2 << "\n";
		//cout << "private:- " << a3 << "\n"; //error
		cout << "\n\nfun1\n";
		//fun1();  // error
		cout << "\n\nfun2\n";
		fun2();
		cout << "\n\nfun3\n";
		fun3();
		//fun3();  error
	}
};

int main()
{
	//A p1;
	//p1.fun1();
	D D1;
    	D1.print1();

	return 0;
}
