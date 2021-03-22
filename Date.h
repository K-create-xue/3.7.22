#pragma once
#include"Time.h"
class Date
{
public:
	friend class Time;
	Date(int year = 1900, int month = 1, int day = 1)
		;
	void SetTimeOfDate(int hour, int minute, int second)
		;
private:
	int _year;
	int _month;
	int _day;
	Time _t;
};