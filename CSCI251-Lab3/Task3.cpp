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

class Staff {
private:
	unsigned int staffID;
	string lastName;
	string firstName;
	float baseSalary;
	int salesMade;
	string staffClass;
	float bonusRate;
public:
	// Constructor
	Staff(unsigned int staffID, string lastName, string firstName, float baseSalary, int salesMade, string staffClass);
	// Empty Constructor
	Staff();
	// Deconstructor
	~Staff();
	// Copy Constructor
	Staff(const Staff& cStaff);
	// Methods
	void setFields(unsigned int staffID, string lastName, string firstName, float baseSalary, int salesMade, string staffClass);
	float computeBonus(int salesMade);
	static void bonusDisplay();
	void display();
};

// Constructor
Staff::Staff(unsigned int staffID, string lastName, string firstName, float baseSalary, int salesMade, string staffClass) {
	this->staffID = staffID;
	this->lastName = lastName;
	this->firstName = firstName;
	this->baseSalary = baseSalary;
	this->staffClass = staffClass;
	this->salesMade = salesMade;
	this->bonusRate = computeBonus(salesMade);
}

Staff::Staff() {
	srand(time(NULL));
	this->staffID = (rand() % 100 + 1);
	this->lastName = "";
	this->firstName = "";
	this->baseSalary = 1.00;
	this->staffClass = "C";
	this->salesMade = 0;
	this->bonusRate = computeBonus(salesMade);
}

// Deconstructor
Staff::~Staff() {
	cout << "Staff Member Deleted!" << endl;
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

void Staff::bonusDisplay() {
	cout << "-------------------------------------" << endl;
	cout << "|SALES  |CLASS A  CLASS B  CLASS C  |" << endl;
	cout << "-------------------------------------" << endl;
	cout << "|0-20   | 0.03     0.02     0.005   |" << endl;
	cout << "|21-50  | 0.05     0.035    0.015   |" << endl;
	cout << "|51+    | 0.075    0.055    0.04    |" << endl;
	cout << "-------------------------------------" << endl;
}

int main() {



	return 0;

}