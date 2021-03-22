#pragma once

class Time
{
	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
public:
	Time(int hour=1, int minute=1, int second=1);
	 void fun(Date& d);
private:
	int _hour;
	int _minute;
	int _second;
};