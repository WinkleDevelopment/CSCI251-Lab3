/*
*	Kyle J. Brookes (6822794)
*	Bachelor of Computer Science (Software Engineering)
*
*	Date: 13/04/2021
*	Lab Number: 3
*
*	Prompts user with options to run lab material
*/

#include "Task1_A.h"
#include <iostream>

using namespace std;

class Worker
{
public:
    int idNum;
    string lastName;
    string firstName;
    double salary;
    void setIdNum(int);
    void setLastName(string);
    void setFirstName(string);
    void setSalary(double);
    void displayWorker();
};

void Worker::setIdNum(int id)
{
    const int LOWID = 0;
    const int HIGHID = 999;
    if (id < LOWID || id > HIGHID)
        idNum = LOWID;
    else
        idNum = id;
}

void Worker::setLastName(string last)
{
    this->lastName = last;
}

void Worker::setFirstName(string first)
{
    this->firstName = first;
}
void Worker::setSalary(double payRate)
{
    const double LOWPAY = 5.75;
    const double HIGHPAY = 99.99;
    if (payRate < LOWPAY || payRate > HIGHPAY)
        salary = LOWPAY;
    else
        salary = payRate;
}

void Worker::displayWorker()
{
    cout << "ID # " << idNum << "\nName: " << firstName << " " << lastName << "\nSalary: $" << salary << endl;
}

int main()
{
    Worker aWorker;
    aWorker.setIdNum(111);
    aWorker.setLastName("Anteater");
    aWorker.setFirstName("Alice");
    aWorker.setSalary(23.45);
    aWorker.displayWorker();
 
    return 0;
}