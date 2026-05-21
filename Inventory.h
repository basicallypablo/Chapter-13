#pragma once
class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

	void setTotalCost(); // private helper to calculate total cost

public:
	// Constructors
	Inventory(); // Default constructor
	Inventory(int itemNum, int qty, double unitCost); // Parameterized constructor

	// Setters with validation
	void setItemNumber(int itemNum);
	void setQuantity(int qty);
	void setCost(double unitCost);

	// Getters
	int getItemNumber() const;
	int getQuantity() const;
	double getCost() const;
	double getTotalCost() const;
};

