//Time.h
#ifndef TIME.H
#define TIME.H

class Time{
public:
	Time(int = 0, int = 0, int = 0);
	
	Time &setTime(int, int, int);
	Time &setHour(int);
	Time &setMinute(int);
	TIme &setSecond(int);
	
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	
	void printUniversal() const;
	void printStandard() const;
	
private:
	int hour;
	int minute;
	int second;
};

#endif

//Time.cpp
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std; 

Time::Time(int hr, int min, int sec){
	setTime(hr, min, sec);
}

Time::&setTime(int h, int m, int s){
	setHour(h);
	setMinute(m);
	setSecond(s);
	return *this;
}

Time &Time::setHour(int h){
	if(h >= 0 && h < 24)
		hour = h;
	else 
		throw invalid_argument("h must be 0-23")
	return *this;
} 

Time &Time::setMinute(int m){
	if(m >= 0 && m < 60)
		minute = m;
	else 
		throw invalid_argument("m must be 0-59");
}

Time &Time::setSecond(int s){
	if(s >= 0 && s < 60)
		second = Sl
	else
		throw invalid_argument("s must be 0-59");
	return *this;
}

int Time::getHour() const{
	return hour;
}
int Time::getMinute() const{
	return minute;
}
int Time::getSecond() const{
	return second;
}
void Time::printUniversal() const{
	cout << setfill('0') << setw(2) << hour << ":"
	     << set(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard() const {
	cout << (hour == 0 || hour == 12) ? 12:hour%12)
	<< ":" << setfill('0') << setw(2) << minute
	<< ":" << setw(2) << second << (hour < 12 ? "AM":"PM");
}


