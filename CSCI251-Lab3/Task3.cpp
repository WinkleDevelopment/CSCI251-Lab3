/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task3.h"
#include <iostream>
#include <ctime>

using namespace std;

enum BonusRates {

};

class Staff {
private:
	int staffID;
	string lastName;
	string firstName;
	float baseSalary;
	int salesMade;
	char staffClass; 
	float bonusRate;
public:
	// Constructor
	Staff(int staffID, string lastName, string firstName, float baseSalary, int salesMade, char staffClass);
	// Empty Constructor
	Staff();
	// Deconstructor
	~Staff();
	// Copy Constructor
	Staff(const Staff& cStaff);
	// Methods
	void setFields(string lastName, string firstName, float baseSalary, int salesMade, char staffClass);
	float computeBonus(int salesMade);
	void display();
};

// Constaints
static const float A1 = 0.03;
static const float A2 = 0.05;
static const float A3 = 0.0075;
static const float B1 = 0.02;
static const float B2 = 0.035;
static const float B3 = 0.055;
static const float C1 = 0.005;
static const float C2 = 0.015;
static const float C3 = 0.04;

// Constructor
Staff::Staff(int staffID, string lastName, string firstName, float baseSalary, int salesMade, char staffClass) {
	this->staffID = staffID;
	this->lastName = lastName;
	this->firstName = firstName;
	this->baseSalary = baseSalary;
	this->staffClass = staffClass;
	this->salesMade = salesMade;
	this->bonusRate = computeBonus(salesMade);
}

// Empty Constructor
Staff::Staff() {
	srand(time(NULL));
	this->staffID = (rand() % 100 + 1);
	this->lastName = "*";
	this->firstName = "*";
	this->baseSalary = 1.00;
	this->staffClass = 'C';
	this->salesMade = 0;
	this->bonusRate = computeBonus(salesMade);
}

// Deconstructor
Staff::~Staff() {
	// Nothing Here
}

// Copy Constructor
Staff::Staff(const Staff& cStaff) {
	this->staffID = cStaff.staffID;
	this->lastName = cStaff.lastName;
	this->firstName = cStaff.firstName;
	this->baseSalary = cStaff.baseSalary;
	this->staffClass = cStaff.staffClass;
	this->salesMade = cStaff.salesMade;
	this->bonusRate = computeBonus(cStaff.salesMade);
}

void Staff::setFields(string lastName, string firstName, float baseSalary, int salesMade, char staffClass) {
	this->lastName = lastName;
	this->firstName = firstName;
	this->baseSalary = baseSalary;
	this->salesMade = salesMade;
	this->staffClass = staffClass;
	this->bonusRate = computeBonus(salesMade);
}

static void bonusDisplay() {
	cout << "-------------------------------------" << endl;
	cout << "|SALES  |CLASS A  CLASS B  CLASS C  |" << endl;
	cout << "-------------------------------------" << endl;
	cout << "|0-20   | 0.03     0.02     0.005   |" << endl;
	cout << "|21-50  | 0.05     0.035    0.015   |" << endl;
	cout << "|51+    | 0.075    0.055    0.04    |" << endl;
	cout << "-------------------------------------" << endl;
}

float Staff::computeBonus(int salesMade) {

	switch (this->staffClass)
	{
	case 'C':
		if (salesMade >= 0 && salesMade <= 20) {
			return (salesMade * C1);
		} else if (salesMade >= 21 && salesMade <= 50 ) {
			return (salesMade * C2);
		} else if (salesMade >= 51) {
			return (salesMade * C3);
		}
		break;
	case 'B':
		if (salesMade >= 0 && salesMade <= 20) {
			return (salesMade * B1);
		}
		else if (salesMade >= 21 && salesMade <= 50) {
			return (salesMade * B2);
		}
		else if (salesMade >= 51) {
			return (salesMade * B3);
		}
		break;
	case 'A':
		if (salesMade >= 0 && salesMade <= 20) {
			return (salesMade * A1);
		}
		else if (salesMade >= 21 && salesMade <= 50) {
			return (salesMade * A2);
		}
		else if (salesMade >= 51) {
			return (salesMade * A3);
		}
		break;
	default:
		cout << "Error: Compute of Bonus Failed!" << endl;
		return NULL;
		break;
	}
}

void Staff::display() {
	cout << endl << "ID : " << this->staffID << endl;
	cout << "Name : " << this->firstName + " " + this->lastName << endl;
	cout << "Class Type : " << this->staffClass << endl;
	cout << "Base Salary : $" << this->baseSalary << endl;
	cout << "Sales Made : " << this->salesMade << endl;
	cout << "Bonus : $" << this->bonusRate << endl << endl;
}

//int main() {
//
//	Staff member1;
//	Staff member2(12, "Roger", "Paul", 238.2, 15, 'A');
//	Staff member3(13, "Poger", "Raul", 835.7, 56, 'B');
//	Staff member4(14, "Floger", "Zaul", 666.9, 30, 'C');
//
//	member1.setFields("Loger", "Faul", 333.0, 98, 'B');
//
//	bonusDisplay();
//
//	member1.display();
//	member2.display();
//	member3.display();
//	member4.display();
//
//	return 0;
//
//}