// C++ program to demonstrate private
// access modifier
 
#include<iostream>
using namespace std;
 
class Distance
{  
    public:
	int feet, inch;
	Distance(int x, int y)
	{
		feet = x;
		inch = y;
	}
	void print()
	{	
		cout << "\nfeet ";
		cout << feet;
		cout << "\ninch ";
		cout << inch;
		cout << "\n";
	}
	~Distance()
	{
		cout << "Distrecter";
		cout << "\n";
	}
     
};
 
// main function
int main()
{  
	Distance dis1(10,20);
    	dis1.print();
     
     
    return 0;
}
