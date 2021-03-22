#include<iostream>
using namespace std;
#include"Date.h"


 
//class Date
//{
//public:
//	friend class Time;
	Date::Date(int year , int month, int day )
		: _year(year)
		, _month(month)
		, _day(day)
	{
	}
	void Date::SetTimeOfDate(int hour, int minute, int second)
	{
		// 直接访问时间类私有的成员变量
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}


//class Time
//{
//	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
//public:
	Time::Time(int hour, int minute, int second)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
	}
	void Time::fun(Date& d)
	{
		cout << d._year <<" "<< d._month<<" " << d._day << endl;
	}


void test()
{
	Date d;
	d.SetTimeOfDate(2, 2, 2); 
	Time t;
	t.fun(d);
}
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{ }
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day<<endl;
//	return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//	
//}
//void test()
//{
//	Date d(2021, 3, 22);
//	cin >> d;
//	cin >> d >> d;
//	
//}
//void test()
//{
//	Date d(2021, 3, 22);
//	//简写形式
//	cout << d;
//	//完整
//	operator<<(cout, d);
//	//连续
//	cout << d << endl;
//	operator<<(operator<<(cout, d), d);
//	operator<<(cout, d) << endl;
//}
int main()
{
	test();
	return 0;
}