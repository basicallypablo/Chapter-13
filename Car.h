#pragma once

#include <string>
using namespace std;

class Car
{
private:
	int yearModel;
	string make;
	int speed;

public:
	Car(int y, string m);

	// Accessors
	int getYearModel() const;
	string getMake() const;
	int getSpeed() const;

	// Mutators
	void accelerate();
	void brake();
};

