/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include <iostream>

using namespace std;

class City;

class Money {
private:
	string country;
	float dollarUnits;
	float exchangeRate;
public:
	Money(string country, float dollarUnits, float exchangeRate);
	Money();
	~Money();
	string getCountry();
	friend bool checkCountry(Money&, City&);
	void display();
};

class City {
private:
	string name;
	string country;
	float longitude;
	float latitude;
	Money currency;
public:
	City(string name, string country, float longitude, float latitude, float dollarUnits, float exchangeRate);
	City();
	~City();
	string getCountry();
	friend bool checkCountry(Money&, City&);
	void display();
};


int main();

