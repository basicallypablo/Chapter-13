#pragma once

class Circle 
{
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default constructor
    Circle();

    // Parameterized constructor
    Circle(double r);

    //setter or mutators
    void setRadius(double r);

    //getter or accessors
    double getRadius() const;
    double getArea() const;
    double getDiameter() const;
    double getCircumference() const;
};