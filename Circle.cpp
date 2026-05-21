#include "Circle.h"

// Default constructor
Circle::Circle()
{
    radius = 0.0;
}

// Parameterized constructor
Circle::Circle(double r) 
{
    radius = (r >= 0) ? r : 0.0;
}

// Set radius
void Circle::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0.0;
}

// Get radius
double Circle::getRadius() const
{
    return radius;
}

// Calculate area
double Circle::getArea() const 
{
    return pi * radius * radius;
}

// Calculate diameter
double Circle::getDiameter() const 
{
    return radius * 2;
}

// Calculate circumference
double Circle::getCircumference() const {
    return 2 * pi * radius;
}