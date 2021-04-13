/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task2.h"
#include <iostream>

using namespace std;

class Cat {
private:
    string name;
    string breed;
    int age;
    static const double licenseFee;
public:
    Cat(string name, string breed, int age) { // Constructor
        this->name = name;
        this->breed = breed;
        this->age = age;
    }
    Cat(const Cat& cCat) { // Copy Constructor
        this->name = cCat.name;
        this->breed = cCat.breed;
        this->age = cCat.age;
    };
    Cat() {}; // Empty Constructor
    ~Cat() {}; // Destructor
    void setCatData(string, string, int);
    void showCat();
    void addressCat();
};

const double Cat::licenseFee = 10;

void Cat::setCatData(string catName, string catBreed, int catAge) {
    this->name = catName;
    this->breed = catBreed;
    this->age = catAge;
}

void Cat::showCat() {
    cout << "Cat: " << name << " is a " << breed << endl;
    cout << "The cat's age is " << age << endl;
    cout << "License fee: $" << licenseFee << endl;
}

void Cat::addressCat() {
    cout << "Object         :   " << this << endl;
    cout << "Name           :   " << &name << endl;
    cout << "Breed          :   " << &breed << endl;
    cout << "Age            :   " << &age << endl;
    cout << "Licence Fee    :   " << &licenseFee << endl;
}

//int main() {
//    // Empty Object
//    Cat myCat;
//    myCat.showCat();
//
//    cout << endl;
//
//    // Filled Using Constuctor
//    Cat myCat2("Unit","Absolute Unit",2);
//    myCat2.showCat();
//
//    cout << endl;
//
//    // Empty Then Using Methods to Set Data of Object
//    Cat myCat3;
//    myCat3.setCatData("Tigger", "Fluffy unit", 3);
//    myCat3.showCat();
//
//    cout << endl;
//
//    // Filled Using Copy Constructor
//    Cat myCat4(myCat2);
//    myCat4.showCat();
//    myCat4.addressCat();
//
//    return 0;
//}