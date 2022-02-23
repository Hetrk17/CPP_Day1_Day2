#include <iostream>  
using namespace std;             
class c1  
{  
   public:
  
        void add()  
	{   
	      static int x; 
  	      cout << x << endl;   
	      x++;
	}           
};  


int main()  
{  
       c1 a;  
       a.add();  
       a.add();
       a.add();
       return 0;  
}
