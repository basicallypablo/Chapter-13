#include "Inventory.h"
#include <iostream>
using namespace std;

// Default constructor
Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.0;
	totalCost = 0.0;
}

// Parameterized constructor
Inventory::Inventory(int itemNum, int qty, double unitCost)
{
	setItemNumber(itemNum);
	setQuantity(qty);
	setCost(unitCost);
	setTotalCost();
}

// Setters with input validation
void Inventory::setItemNumber(int itemNum)
{
	if (itemNum >= 0)
	{
		itemNumber = itemNum;
	}
	else
	{
		cout << "Error: Item number cannot be negative." << "\n";
		itemNumber = 0;  // default to 0
	}
}

void Inventory::setQuantity(int qty)
{
	if (qty >= 0) {
		quantity = qty;
	}
	else
	{
		cout << "Error: Quantity cannot be negative." << "\n";
		quantity = 0;  // default to 0
	}
}

void Inventory::setCost(double unitCost)
{
	if (unitCost >= 0)
	{
		cost = unitCost;
	}
	else
	{
		cout << "Error: Cost cannot be negative." << "\n";
		cost = 0.0;  // default to 0.0
	}
}

// Calculate total cost (quantity * cost)
void Inventory::setTotalCost()
{
	totalCost = quantity * cost;
}

// Getters
int Inventory::getItemNumber() const
{
	return itemNumber;
}

int Inventory::getQuantity() const
{
	return quantity;
}

double Inventory::getCost() const
{
	return cost;
}

double Inventory::getTotalCost() const
{
	return totalCost;
}
