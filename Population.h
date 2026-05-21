#pragma once

class Population 
{
private:
    int population;
    int births;
    int deaths;

public:
    // Constructor
    Population(int pop, int b, int d);

    // Accessor functions
    double getBirthRate() const;
    double getDeathRate() const;

    // Display function
    void displayRates() const;
};


