#include <iostream>
#include "Population.h"
using namespace std;

Population::Population(int pop, int b, int d) 
{
    if (pop > 0) {
        population = pop;
    }
    else {
        population = 1; 
        cout << "Invalid population value.\n";
    }

    births = (b >= 0) ? b : 0;
    deaths = (d >= 0) ? d : 0;
}

double Population::getBirthRate() const {
    return static_cast<double>(births) / population;
}

double Population::getDeathRate() const {
    return static_cast<double>(deaths) / population;
}

void Population::displayRates() const {
    cout << "Birth Rate: " << getBirthRate() << "\n";
    cout << "Death Rate: " << getDeathRate() << "\n";
}