#include "Time.h"
#include <iostream>

using namespace std;
Time::Time()
{
	min = 0;
	hour = 0;
}

Time::Time(int h,int m)
{
	hour = h;
	min = m;
}


Time::~Time()
{
}

void Time::set(int h, int m){
	min = m;
	hour = h;
}

Time Time::get(int hr, int min){
	Time time;

	time.hour = hr;
	time.min = min;
	
	return time;
}
Time Time:: operator++(){
	Time res;

	++res.min;
	if (res.min >= 60)
	{
		++res.hour;
		res.min -= 60;
	}
	return res;

}
	
