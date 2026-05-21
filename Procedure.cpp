#include "Procedure.h"
Procedure::Procedure()
{
	name = "unknown";
	date = "unknown";
	practitioner = "unknown";
	charges = 0.0;
}
Procedure::Procedure(string n, string d, string p, double c)
{
	name = n;
	date = d;
	practitioner = p;
	charges = c;
}
//setters and getters
void Procedure::setName(string n)
{
	name = n;
}
string Procedure::getName() const
{
	return name;
}
void Procedure::setDate(string d)
{
	date = d;
}
string Procedure::getDate() const
{
	return date;
}
void Procedure::setPractitioner(string p)
{
	practitioner = p;
}
string Procedure::getPractitioner() const
{
	return practitioner;
}
void Procedure::setCharges(double c)
{
	charges = c;
}
double Procedure::getCharges() const
{
	return charges;
}