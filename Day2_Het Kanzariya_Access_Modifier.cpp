// C++ program to demonstrate access modifier
// Het Kanzariya
#include<iostream>
using namespace std;
 
class Cal
{  
    public:
	int a1, b1;
    private:
        int a2, b2;
    protected:
	int a3, b3;
      
    // public member function   
    protected:  
	void set()
	{
		a1 = 10;
		b1 = 20;
		a2 = 30;
		b2 = 40;
		a3 = 50;
		b3 = 60;
	} 
        int add1()
        {
		set();   
            	return a1+b1;
        }
        int add2()
        {   
		set(); 
            	return a2+b2;
        }
        int add3()
        {   
		set(); 
            	return a3+b3;
 	    
        }
    public:
	void print()
	{	
		cout << "\npublic ";
		cout << add1();
		cout << "\nprivate ";
		cout << add2();
		cout << "\nprotected ";
		cout << add3() << "\n";
	}
     
};
 
// main function
int main()
{  
	Cal cal1;
    	cal1.print();
     
     
    return 0;
}
