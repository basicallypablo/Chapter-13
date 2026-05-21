#include "Date.h"
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
void Date::setMonth(int m)
{
	month = m;
}
int Date::getMonth() const
{
	return month;
}
void Date::setDay(int d)
{
	day = d;
}
int Date::getDay() const
{
	return day;
}
void Date::setYear(int y)
{
	year = y;
}
int Date::getYear() const
{
	return year;
}
string Date::getFormat1() const
{
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}
string Date::getFormat2() const
{
	string monthName[13] = { "unknown", "January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December" };
	return monthName[month] + " " + to_string(day) + ", " + to_string(year);
}
string Date::getFormat3() const
{
	string monthName[13] = { "unknown", "January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December" };
	return to_string(day) + " " + monthName[month] + " " + to_string(year);
}
bool Date::isLeapYear() const
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}