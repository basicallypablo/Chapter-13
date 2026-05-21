#pragma once
#include<string>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();   //(default or no arg) constructor

	//setter or mutators
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

	//getter or accessors
	int getMonth() const;
	int getDay() const;
	int getYear() const;

	string getFormat1() const;
	string getFormat2() const;
	string getFormat3() const;
	bool isLeapYear() const;
};

