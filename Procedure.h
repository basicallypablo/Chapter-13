#pragma once
#include<string>
using namespace std;

class Procedure
{
private:
	string name;
	string date;
	string practitioner;
	double charges;

public:
	//constructors
	Procedure();
	Procedure(string n, string d, string p, double c);

	//setters and getters
	void setName(string n);
	string getName() const;
	void setDate(string d);
	string getDate() const;
	void setPractitioner(string p);
	string getPractitioner() const;
	void setCharges(double c);
	double getCharges() const;

};

