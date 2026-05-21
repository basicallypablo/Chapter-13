#include "Patient.h"
Patient::Patient()
{
	name = "unknown";
	address = "unknown";
	phone = "unknown";
	contact = "unknown";
}
Patient::Patient(string n, string a, string p, string c)
{
	name = n;
	address = a;
	phone = p;
	contact = c;
}
void Patient::setName(string n)
{
	name = n;
}
string Patient::getName() const
{
	return name;
}
void Patient::setAddress(string a)
{
	address = a;
}
string Patient::getAddress() const
{
	return address;
}
void Patient::setPhone(string p)
{
	phone = p;
}
string Patient::getPhone() const
{
	return phone;
}
void Patient::setContact(string c)
{
	contact = c;
}
string Patient::getContact() const
{
	return contact;
}