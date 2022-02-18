//C++ program For calculating sleeptime and age
//Het Kanzariya
#include <iostream>
#include <ctime>

using namespace std;
class Time
{
    public:
	int hour,minuite,second;
	time_t now = time(0); // set current time
   	tm *ltm = localtime(&now);
	void setTime()
	{
		hour = ltm->tm_hour; // set current hour
		minuite = ltm->tm_min;  // set current minuite
		second = ltm->tm_sec;  // set current secend
	}
	Time getTime()
	{	
		Time obj3;
		obj3.hour = hour;
		obj3.minuite = minuite;
		obj3.second = second;
		return obj3;
	}
	Time sleepTime(int ihour, int iminuite, int isecond)
	{
		Time obj4;
		obj4.hour = hour - ihour;
		obj4.minuite = minuite - iminuite;
		obj4.second = second - isecond;
		if(obj4.second < 0)                          // If second is negetive then reduce one from minite and add 60 in secend
		{
			obj4.second = obj4.second + 60;
			obj4.minuite--;
		}
		if(obj4.minuite < 0)  // If minite is negetive then reduce one from hour and add 60 in minite
		{
			obj4.minuite = obj4.minuite + 60;
			obj4.hour--;
		}
		if(obj4.hour < 0)
		{
			obj4.hour = obj4.hour + 24;
		}
		return obj4;
	}
	
};

class Date
{
    public:

	int year,month,day;
	time_t now = time(0);
   	tm *ltm = localtime(&now);

	Date setDay()
	{
		Date obj3;
		year = 1900 + ltm->tm_year;
		month = ltm->tm_mon+1;
		day = ltm->tm_mday;
		obj3.year = year;
		obj3.month = month;
		obj3.day = day;
		return obj3;
	}
	Date getDay()
	{	
		Date obj3;
		obj3.year = year;
		obj3.month = month;
		obj3.day = day;
		return obj3;
	}
	Date setDOB(int iyear, int imonth, int iday)
	{
		Date obj3;
		obj3.year = iyear;
		obj3.month = imonth;
		obj3.day = iday;
		return obj3;
	}
	Date findAge(Date obj4)
	{
		Date obj3;
		obj3.year = year - obj4.year;
		obj3.month = month - obj4.month;
		obj3.day = day - obj4.day;
		if(obj3.day < 0)		// If day is negetive then reduce one from month and add 30 in secend
		{
			obj3.day = obj3.day + 30;
			obj3.month--;
		}
		if(obj3.month < 0)   // If mounth is negetive then reduce one from year and add 12 in secend
		{
			obj3.month = obj3.month + 12;
			obj3.year--;
		}
		
		return obj3;
	}
};

int main() 
{
	Time tim1,tim2;					// to find sleep time
	int hour1, minuite1, second1;
	tim1.setTime();
	tim2 = tim1.getTime();
	cout << "\nCurrent time is : " << tim2.hour << ":";
   	cout << tim2.minuite << ":";
   	cout << tim2.second << endl;
	cout << "\n"<< endl;
	cout << "\nEnter hour:- " ;
	cin >> hour1;
	cout << "Enter minuite:- " ;
	cin >> minuite1;
	cout << "Enter second:- " ;
	cin >> second1;
	tim2 = tim1.sleepTime(hour1, minuite1, second1);
	cout << "\nSleep time is : " << tim2.hour << ":";
   	cout << tim2.minuite << ":";
   	cout << tim2.second << endl;
	cout << "\n"<< endl;



	cout << "\n"<< endl;          // to find age
	Date day2,day3,day4,day5;
	int year1 ,month1 ,date1;
	day2 = day2.setDay();
	day3 = day2.getDay();
	cout << "\nCurrent Day is : " << day3.day << "/";
   	cout << day3.month << "/";
   	cout << day3.year << endl;
	cout << "\n"<< endl;
	cout << "\nEnter Birth Day:- " ;
	cin >> date1;
	cout << "Enter Birth Month:- " ;
	cin >> month1;
	cout << "Enter Birth Year:- " ;
	cin >> year1;
	day4 = day2.setDOB(year1 ,month1 ,date1);
	day5 = day2.findAge(day4);
	cout << "\nAge is : " << day5.year << " Years ";
   	cout << day5.month << " Months ";
   	cout << day5.day << " Days " << endl;
	cout << "\n"<< endl;
}
