// Question 1:
// Explain the concept of single inheritance in C++.
// Create a base class named Person that contains data members such as name and age, and a member
// function to display these details.
// Then derive a class Student from the Person class that includes an additional data member rollNo and a
// function to display student information.

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    void displayStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Satvika";
    s1.age = 20;
    s1.rollNo = 101;
    s1.displayPerson();
    s1.displayStudent();
    return 0;
}
