#include<iostream>
#include <cstring>
using namespace std;

class student 
{
   protected:
	int roll_no;
	char name[6];
   public: 
	student(int roll, char n[])
	{
		roll_no = roll;
		strcpy( name, n);
	}
};

class test
{
	 public:
	int marks[5];
	int j;
	test(int m[])
	{
		for(j=0;j<5;j++)
		{
			marks[j] = m[j];
			
		}
	}
};

class result : public student, public test
{
   public:
	int totalmarks = 0;
	float percenrtage; 
	int i;
	result(int roll, char n[], int m[]) : student(roll,n), test(m)
	{
		for(i=0;i<5;i++)
		{
			totalmarks = totalmarks + marks[i];
			
		}
		percenrtage = float(totalmarks/5);
	}
	void print()
	{
		cout << "Total marks:- " << totalmarks << "\n";
		cout << "Percenrtage :- " << percenrtage << " %\n";
	}
};

int main()
{
	int rn;
	int marks[5];
	char name[50];
	cout << "Enter roll no. of student " << ": ";
	cin >> rn;
	cout << "Enter name of student " << ": ";
	cin >> name;
	cout << endl;

	for(int i=0;i<5;i++)
	{
		cout << "Enter marks of subject " << i+1 << ": ";
		cin >> marks[i];
	}
	result res1(rn,name,marks);
	res1.print();

	return 0;
}
