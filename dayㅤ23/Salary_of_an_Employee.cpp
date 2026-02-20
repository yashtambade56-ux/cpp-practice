// Problem Statement 1: Salary of an Employee
// Design a C++ program to manage salary calculation for different types of employees in an organization.
// 1. Create a base class named Employee.
// 2. In the base class, define a virtual function named calculateSalary() that displays a general salary message.
// 3. Create two derived classes:
// o FullTime
// o PartTime
// 4. Override the calculateSalary() function in both derived classes:
// o FullTime employees should display salary as 50000.
// o PartTime employees should display salary as 20000.
// 5. In the main() function:
// o Create objects of both derived classes.
// o Use a base class pointer to call the overridden functions.
// 6. Demonstrate runtime polymorphism.

#include<iostream>
using namespace std;
class Employee {
    public:
    virtual void calculateSalary() {
        cout << "Employee salary is calculated" << endl;
    }
};
class FullTime : public Employee {
    public:
    void calculateSalary() {
        cout << "FullTime salary is 50000" << endl;
    }
};
class PartTime : public Employee {
    public:
    void calculateSalary() {
        cout << "PartTime salary is 20000" << endl;
    }
};
int main() {
    Employee* ptr;
    FullTime f;
    PartTime p;
    ptr = &f;
    ptr->calculateSalary();
    ptr = &p;
    ptr->calculateSalary();
    return 0;
}