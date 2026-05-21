#pragma once
#include<string>
using namespace std;
class Patient
{
private:
	string name;
	string address;
	string phone;
	string contact;
public:
	//contructors
	Patient();
	Patient(string n, string a, string p, string c);

	void setName(string n);
	string getName() const;
	
	void setAddress(string a);
	string getAddress() const;

	void setPhone(string p);
	string getPhone() const;
	
	void setContact(string c);
	string getContact() const;


};

