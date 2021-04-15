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

int main() {

	Money USD("America", 1, 0.77);
	Money AUD("Australia", 1, 0.67);

	City NewYork("New York", "America", 40.7128, 74.0060);
	City Sydney("Sydney", "Australia", 33.8688, 151.2093);

	// 1 is True, 0 is False

	cout << "Value : " << checkCountry(USD, NewYork) << endl;
	cout << "Value : " << checkCountry(USD, Sydney) << endl;

	cout << "Value : " << checkCountry(AUD, NewYork) << endl;
	cout << "Value : " << checkCountry(AUD, Sydney) << endl;

}