/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task5.h"
#include <iostream>

using namespace std;

int main() {


	Money testObject1("America", 1, 0.77);
	Money testObject2("Australia", 1, 0.67);

	City NewYork("New York", "America", 40.7128, 74.0060, 1, 0.77);
	City Sydney("Sydney", "Australia", 33.8688, 151.2093, 1, 0.67);

	NewYork.display();
	Sydney.display();

	// 1 is True, 0 is False
	cout << "Value : " << checkCountry(testObject1, NewYork) << endl;
	cout << "Value : " << checkCountry(testObject1, Sydney) << endl;

	cout << "Value : " << checkCountry(testObject2, NewYork) << endl;
	cout << "Value : " << checkCountry(testObject2, Sydney) << endl;

}
