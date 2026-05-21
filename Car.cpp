#include "Car.h"

// Constructor
Car::Car(int y, string m)
{
	yearModel = y;
	make = m;
	speed = 0;
}

// Accessors
int Car::getYearModel() const
{
	return yearModel;
}

string Car::getMake() const
{
	return make;
}

int Car::getSpeed() const
{
	return speed;
}

// Mutators
void Car::accelerate()
{
	speed += 5;
}

void Car::brake()
{
	if (speed >= 5)
		speed -= 5;
	else
		speed = 0;
}
