// 1. Student Class
// Question: Create a class named Student. The class should have:
// · Data members: name, rollNumber, and marks
// · A member function to input student details
// · A member function to display student details
// Objective: Understand how to define a class, create an object, and access data using member functions.

#include <iostream>
#include <string>
using namespace std;    
class Student {
private:
    string name;
    int rollNumber;
    float marks;
public: 
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}