/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task4.h"
#include <iostream>

using namespace std;

/* City Class */
// Contructor
City::City(string name, string country, float longitude, float latitude) {
	this->name = name;
	this->country = country;
	this->longitude = longitude;
	this->latitude = latitude;
}

// Empty Constructor
City::City() {
	this->name = " * * * ";
	this->country = " * * * ";
	this->longitude = 0.00;
	this->latitude = 0.00;
}

// Deconstructor
City::~City() {
	// Nothing Here
}

// Methods
string City::getCountry() {
	return this->country;
}

/* Money Class */
// Constructor
Money::Money(string country, float dollarUnits, float exchangeRate) {
	this->country = country;
	this->dollarUnits = dollarUnits;
	this->exchangeRate = exchangeRate;
}

// Empty Constructor
Money::Money() {
	this->country = " * * * ";
	this->dollarUnits = 0.00;
	this->exchangeRate = 0.00;
}

// Deconstructor
Money::~Money() {
	// Nothing Here
}

// Methods
string Money::getCountry() {
	return this->country;
}

bool checkCountry(Money& a, City& b) {
	return (a.getCountry() == b.getCountry());
}