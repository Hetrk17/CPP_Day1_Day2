// C++ program For Calculator
//Het Kanzariya
#include <iostream>
using namespace std;
class Calculator
{
     public:
	int input1;
	int input2;
	void setInput(int a,int b)
	{
		input1 = a;
		input2 = b;
	}
	int add()
	{
		return input1+input2;
	}
	int min()
	{
		return input1-input2;
	}
	int mul()
	{
		return input1*input2;
	}
	float div()
	{
		return (float)input1/input2;
	}
	Calculator modulo(Calculator obj1, Calculator obj2) // object return function.
	{
		Calculator obj3;
		obj3.input1 =  obj1.input1 % obj2.input1;
		return obj3;
	}
};
	
int main()
{	
	int a,b,c;
	Calculator obj1,obj2,obj3,obj4;
	cout << "Enter two numbers:- ";
	cin >> a;
	cin >> b;
	obj1.setInput(a,b);
	obj2.setInput(10,6);
	obj3.setInput(9,5);
	cout << "The inputs: " << obj1.input1 << " " << obj1.input2 << "\n" << endl;
	cout << "1:- Add \n2:- Subsrect \n3:- Multiplication \n4: - Devide \n5: - Modulo \n";
	cout << "Enter your function:- ";
	cin >> c;
	
	switch (c) 
	{
	    case 1:  // addion
	        cout << obj1.input1 << "+" << obj1.input2 << " = " << obj1.add() << "\n" << endl;
	        break;
	    case 2:  // Substreaction
	        cout << obj1.input1 << "-" << obj1.input2 << " = " << obj1.min() << "\n" << endl;
	        break;
	    case 3: // Multiply
	        cout << obj1.input1 << "*" << obj1.input2 << " = " << obj1.mul() << "\n" << endl;
	        break;
	    case 4: // Devide
	        cout << obj1.input1 << "/" << obj1.input2 << " = " << obj1.div() << "\n" << endl;
	        break;
	    case 5:	// Modulo
		obj4 = obj1.modulo(obj2,obj3);
	        cout << obj2.input1 << "%" << obj3.input1 << " = " << obj4.input1 << "\n" << endl;
	        break;
	    default:
		cout << "Enter a proper choise. \n";
   	 }
	return 0;
}
