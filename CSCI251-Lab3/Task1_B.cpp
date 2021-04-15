/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task1_B.h"
#include <iostream>

using namespace std;

class Hat {
public:
    string type;
    char size; // S, M, L
    Hat() {};
    Hat(string type, char size) {
        this->type = type;
        this->size = size;
    }
    void display();
};

void Hat::display()
{
    cout << "Hat size   : " << type << endl;
    cout << "Hat type   : " << size << endl;
}

class Person {
public:
    string name;
    unsigned int idNum;
    Hat myHat;
    Person() {};
    Person(string name, unsigned int idNum, string type, char size) {
        this->name = name;
        this->idNum = idNum;
        this->myHat = Hat(type, size);
    }
    void display();
};

void Person::display()
{
    cout << "Given name : " << name << endl;
    cout << "Id. number : " << idNum << endl;
    myHat.display();
}

int main() {
    Person PersonA("Alice",12321,"Beret",'M');
    Person PersonB("Bob",2324,"Trilby",'S');
    PersonA.display();
    PersonB.display();

    return 0;
}