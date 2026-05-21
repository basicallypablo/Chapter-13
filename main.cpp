// Name: Pablo Lopez worked with: Kevin Ortiz and Ricardo Salgado
// Date: 3/21/2026
// Description: Chapter 13 Assignments - CMPR 121
#include<iostream>
#include"input.h"
#include"Date.h"
#include"patient.h"
#include"Procedure.h"
#include"Population.h"
#include "Inventory.h"
#include"Circle.h"
#include"Car.h"
using namespace std;
int menuOption();
void Challenge1();
void Challenge3();
void Challenge4();
void Challenge6();
void Challenge8();
void Challenge9();
int main()
{
	do
	{
		switch (menuOption())
		{
		case 0: exit(1); break;
		case 1: Challenge1(); break;
		case 3: Challenge3(); break;
		case 4: Challenge4(); break;
		case 6: Challenge6(); break;
		case 8: Challenge8(); break;
		case 9: Challenge9(); break;
		default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
		}
		cout << "\n";
		system("pause");
	} while (true);
	return EXIT_SUCCESS;
}
int menuOption()
{
	cout << "\n\tChapter 12 - assignments by Pablo Lopez";
	cout << "\n\t" << string(80, char(205));
	cout << "\n\t1. Challenge1";
	cout << "\n\t3. Challenge3";
	cout << "\n\t4. Challenge4";
	cout << "\n\t6. Challenge6";
	cout << "\n\t8. Challenge8";
	cout << "\n\t9. Challenge9";
	cout << "\n\t" << string(80, char(205));
	return inputInteger("\n\tOption: ", 0, 9);
}
void Challenge1()
{
	Date testDate1;
	testDate1.setYear(inputInteger("\nEnter a year (positive): ", true));
	cout << "\nyear: " << testDate1.getYear();
	testDate1.setMonth(inputInteger("\nEnter a month (1...12): ", 1, 12));
	cout << "\nmonth: " << testDate1.getMonth();

	// Determine max day for the selected month and year
	int FullDay;
	int month = testDate1.getMonth();

	if (month == 2)  
	{
		FullDay = testDate1.isLeapYear() ? 29 : 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		FullDay = 30;
	}
	else
	{
		FullDay = 31;
	}

	// Get day with validation
	testDate1.setDay(inputInteger("\nEnter a day (1..." + to_string(FullDay) + "): ", 1, FullDay));
	cout << "\nday: " << testDate1.getDay();

	// Display formats
	cout << "\n\nFormat1: " << testDate1.getFormat1();
	cout << "\nFormat2: " << testDate1.getFormat2();
	cout << "\nFormat3: " << testDate1.getFormat3();
	cout << "\n";
}
void Challenge3()
{
	Car myCar(2022, "Toyota");

	cout << "\nCar Info:";
	cout << "\nYear Model: " << myCar.getYearModel();
	cout << "\nMake: " << myCar.getMake();
	cout << "\nStarting Speed: " << myCar.getSpeed() << " mph\n";

	cout << "\nAccelerating...\n";
	for (int i = 1; i <= 5; i++)
	{
		myCar.accelerate();
		cout << "Speed after accelerate #" << i << ": " << myCar.getSpeed() << " mph\n";
	}

	cout << "\nBraking...\n";
	for (int i = 1; i <= 5; i++)
	{
		myCar.brake();
		cout << "Speed after brake #" << i << ": " << myCar.getSpeed() << " mph\n";
	}

	cout << "\n";
}
void Challenge4()
{
	Patient p1; //test the default constructor
	//cout << "\nName : " << p1.getName();
	//cout << "\nAddress : " << p1.getAddress();
	//cout << "\nPhone # : " << p1.getPhone();
	//cout << "\nContact : " << p1.getContact();
	//cout << "\n";
	Patient p2("Nick", "1117 Barbara Ln", "714-232-2323", " wife 911"); //test thedefault constructor
	p2.setName(inputString("\nEnter a new name: ", true));
	p2.setAddress(inputString("\nEnter a new address: ", true));
	p2.setPhone(inputString("\nEnter a new phone#: ", true));
	p2.setContact(inputString("\nEnter a new contact: ", true));
	cout << "\nPatient information:\n";
	cout << "\nName : " << p2.getName();
	cout << "\nAddress : " << p2.getAddress();
	cout << "\nPhone # : " << p2.getPhone();
	cout << "\nContact : " << p2.getContact();
	cout << "\n";
	Procedure prod[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "\nInput procedure " << i + 1;
		prod[i].setName(inputString("\nEnter the procedure name: ", true));
		prod[i].setDate(inputString("\nEnter the procedure date: ", false));
		prod[i].setPractitioner(inputString("\nEnter the procedure practitioner: ",
			true));
		prod[i].setCharges(inputDouble("\nEnter the procedure charges: $", 0.01,
			1000000.00));
	}
	cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "\nOutput procedure " << i + 1;
		cout << "\nName of procedure: " << prod[i].getName();
		cout << "\nDate: " << prod[i].getDate();
		cout << "\nPractitioner: " << prod[i].getPractitioner();
		cout << "\nCharges: $" << prod[i].getCharges();
		cout << "\n";
	}
}
void Challenge6()
{
	int itemNum, qty;
	double unitCost;

	// Get input from the user
	cout << "Enter item number: ";
	cin >> itemNum;

	cout << "Enter quantity: ";
	cin >> qty;

	cout << "Enter unit cost: $";
	cin >> unitCost;

	// Create an Inventory object using the input data
	Inventory item(itemNum, qty, unitCost);

	// Display the item details
	cout << "\nInventory Item Details:\n";
	cout << "Item Number: " << item.getItemNumber() << "\n";
	cout << "Quantity: " << item.getQuantity() << "\n";
	cout << "Unit Cost: $" << item.getCost() << "\n";
	cout << "Total Cost: $" << item.getTotalCost() << "\n";
}
void Challenge8()
{
	double UserRadius;

	cout << "Enter the radius of the circle: ";
	cin >> UserRadius;
	Circle circle(UserRadius);  // Create object with user radius

	cout << "\nCircle Information:" << "\n";
	cout << "Radius: " << circle.getRadius() << "\n";
	cout << "Area: " << circle.getArea() << "\n";
	cout << "Diameter: " << circle.getDiameter() << "\n";
	cout << "Circumference: " << circle.getCircumference() << "\n";

}
void Challenge9()
{
	int population, births, deaths;

	cout << "Enter total population: ";
	cin >> population;

	cout << "Enter number of births: ";
	cin >> births;

	cout << "Enter number of deaths: ";
	cin >> deaths;

	Population popData(population, births, deaths);
	popData.displayRates();
}