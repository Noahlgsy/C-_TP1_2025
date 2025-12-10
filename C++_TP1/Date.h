#include <vector>
#include <iostream>
#pragma once
class Date
{
private: 
	int day; 
	int month; 
	int year; 
public: 
	Date(int _day, int _month, int _year)
		: day(_day), month(_month), year(_year) {}
	Date() = default;
	int get_day() const { return day;  }
	int get_month() const { return month; }
	int get_year() const { return year; }
	friend std::ostream& operator<<(std::ostream& os, const Date& d); 
};