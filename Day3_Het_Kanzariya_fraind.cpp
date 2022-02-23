#include <iostream>  
using namespace std;  
class c2;           
class c1  
{  
   
        int x;  
   public:      
	c1()
	{
		x =20;
	}  
        friend void mul(c1,c2);          
    };  
class c2      
{  
        int y;  
    public:
        c2()
	{
		y =40;
	}   
        friend void mul(c1,c2);                    
};  
void mul(c1 a,c2 b)  
{   
  	      cout << a.x * b.y << endl;   
}  
int main()  
{  
       c1 a;  
       c2 b;  
       mul(a,b);  
       return 0;  
}  
