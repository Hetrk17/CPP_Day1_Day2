//C++ program to find Area and Volume of Cuboid
//Het Kanzariya

#include <iostream>
using namespace std;

class Measure
{
    public: 
	int h;
	int w;
	int l;
	void setInput(int hight, int length, int width)
	{
		h = hight;
		l = length;
		w = width;
	}
	int area()
	{
		int ans;
		ans = 2*(l*w + w*h + l*h);
		return  ans;
	}
	int volume()
	{
		return h*l*w;
	}	
};

int main()
{
	int h1,w1,l1;
	cout<< "Enter hight, length & width of Cuboid:- ";
	cin >> h1;
	cin >> l1;
	cin >> w1;
	Measure cub1;
	cub1.setInput(h1,l1,w1);
	cout << "Area of Cuboid is " << cub1.area() << "\n" << endl;
	cout << "Volume of Cuboid is " << cub1.volume() << "\n" << endl;
	return 0;
	
}

