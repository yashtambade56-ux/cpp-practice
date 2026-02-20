// Question 3:
// What is inheritance in C++? Explain single inheritance with the help of a geometric example.
// Create a base class Shape containing data members width and height.
// Derive a class Rectangle from the Shape class that calculates and displays the area of the rectangle.
// Explain how data members of the base class are used in the derived class.
// Write a complete C++ program for this example.

#include <iostream>
using namespace std;

class Shape {
public:
    int width;
    int height;
};

class Rectangle : public Shape {
public:
    void calculateArea() {
        cout << "Area of the rectangle: " << width * height << endl;
    }
};

int main() {
    Rectangle r1;
    r1.width = 5;
    r1.height = 10;
    r1.calculateArea();
    return 0;
}