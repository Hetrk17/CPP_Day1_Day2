#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(int x, int y)
	{
		real = x;
		img = y;
	}
	friend ostream &operator << ( ostream &output, const Complex &D )
	{
		cout << D.real << " + " << D.img << "i \n";
	}
	
	Complex operator + (Complex ob)
	{
		Complex temp;
		cout << "\nIn + function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		cout << "second Complex Number:- "<< ob.real << " + " << ob.img << "i \n";
		temp.real = real + ob.real;
		temp.img = img + ob.img;
		return temp;
	}
	Complex operator - (Complex ob)
	{
		Complex temp;
		cout << "\nIn - function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		cout << "second Complex Number:- "<< ob.real << " + " << ob.img << "i \n";
		temp.real = real - ob.real;
		temp.img = img - ob.img;
		return temp;
	}
	Complex operator * (Complex ob)
	{
		Complex temp;
		cout << "\nIn * function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		cout << "second Complex Number:- "<< ob.real << " + " << ob.img << "i \n";
		temp.real = real * ob.real;
		temp.img = img * ob.img;
		return temp;
	}
	Complex operator / (Complex ob)
	{
		Complex temp;
		cout << "\nIn / function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		cout << "second Complex Number:- "<< ob.real << " + " << ob.img << "i \n";
		temp.real = real / ob.real;
		temp.img = img / ob.img;
		return temp;
	}
	Complex operator ++(int)
	{
		Complex temp;
		cout << "\nIn ++ function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		temp.real = real++;
		temp.img = img++;
		return temp;
	}
	Complex operator ++ ()
	{
		Complex temp;
		cout << "\nIn ++ function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		temp.real = ++real;
		temp.img = ++img;
		return temp;
	}
	Complex operator -- ()
	{
		Complex temp;
		cout << "\nIn ++ function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		temp.real = --real;
		temp.img = --img;
		return temp;
	}
	Complex operator - ()
	{
		Complex temp;
		cout << "\nIn - function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		temp.real = -real;
		temp.img = -img;
		return temp;
	}
	int operator == (Complex ob)
	{
		int tempr,tempi;
		cout << "\nIn == function \n";
		cout << "first Complex Number:- "<< real << " + " << img << "i \n";
		cout << "second Complex Number:- "<< ob.real << " + " << ob.img << "i \n";
		tempr = (real == ob.real);
		tempi = (img == ob.img);
		return (tempr && tempi)?1:0;
	}
};

int main()
{
	Complex c1(15,20), c2(5,10);
	Complex c3(1,1),c4,c5(15,20);
	int temp,temp1;
	cout << "Object1";
	cout << "\nComplex Number:- "<< c1;
	cout << "Object2";
	cout << "\nComplex Number:- "<< c2;
	cout << "Object3";
	cout << "\nComplex Number:- "<< c3;
	c4 = c1 + c2 + c3;
	cout << "\nob1 + ob2 + ob3";
	cout << "\nComplex Number:- "<< c4;
	c4 = c1 - c2 - c3;
	cout << "\nob1 - ob2 - ob3";
	cout << "\nComplex Number:- "<< c4;
	c4 = c1 * c2 * c3;
	cout << "\nob1 * ob2 * ob3";
	cout << "\nComplex Number:- "<< c4;
	c4 = c1 / c2 / c3;
	cout << "\nob1 / ob2 / ob3";
	cout << "\nComplex Number:- "<< c4;
	c4 = ++c1;
	cout << "++ob1";
	cout << "\nComplex Number:- "<< c4;
	c4 = c1++;
	cout << "ob1++";
	cout << "\nComplex Number:- "<< c4;
	c4 = --c1;
	cout << "--ob1";
	cout << "\nComplex Number:- "<< c4;
	c4 = -c1;
	cout << "-ob1";
	cout << "\nComplex Number:- "<< c4;
	temp = (c1==c2);
	cout << "\nob1 == ob2\n";
	(temp && 1) ? cout << "Same\n" : cout << "Diffrent\n";
	temp = (c1==c5);
	cout << "\nob1 == ob5\n";
	(temp && 1) ? cout << "Same\n" : cout << "Diffrent\n";
}
