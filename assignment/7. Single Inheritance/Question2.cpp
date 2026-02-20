// Question 2:
// Define single inheritance and explain it using a real-world example.
// Design a base class Vehicle with a data member speed and a function to display the speed of the vehicle.
// Derive a class Car from the Vehicle class that has its own member function to display a message
// identifying the object as a car.
// Explain the role of the base class and derived class.
// Write a C++ program that demonstrates single inheritance.
// Explain how code reusability is achieved in this example.

#include <iostream>
using namespace std;

class Vehicle {
public:
    int speed;
    void displaySpeed() {
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
public:
    void displayMessage() {
        cout << "This is a car." << endl;
    }
};

int main() {
    Car c1;
    c1.speed = 100;
    c1.displaySpeed();
    c1.displayMessage();
    return 0;
}