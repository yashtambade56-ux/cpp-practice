// Problem Statement 2: Shape Area Calculation-Design a C++ program to calculate the area of different shapes using the
// concept of inheritance and virtual functions.
// 1. Create a base class named Shape.
// 2. Declare a virtual function area() in the base class that displays a general message.
// 3. Create the following derived classes:
// o Rectangle
// o Circle
// o Square
// o Rhombus
// 4. Override the area() function in each derived class:
// o Rectangle → Area = length × width
// o Circle → Area = 3.14 × radius × radius
// o Square → Area = side × side
// o Rhombus → Area = (diagonal1 × diagonal2) / 2
// 5. In the main() function:
// o Create objects of all derived classes.
// o Use a base class pointer to call the overridden functions.
// 6. Demonstrate runtime polymorphism.

#include<iostream>
using namespace std;
class Shape {
    public:
    virtual void area() {
        cout << "Area is calculated" << endl;
    }
};  
class Rectangle : public Shape {
    public:
    void area() {
        int length, width;
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
        cout << "Area of rectangle is: " << length * width << endl;
    }
};
class Circle : public Shape {
    public:
    void area() {
        int radius;
        cout << "Enter radius of circle: ";
        cin >> radius;
        cout << "Area of circle is: " << 3.14 * radius * radius << endl;
    }
};
class Square : public Shape {
    public:
    void area() {
        int side;
        cout << "Enter side of square: ";
        cin >> side;
        cout << "Area of square is: " << side * side << endl;
    }
};
class Rhombus : public Shape {
    public:
    void area() {
        int diagonal1, diagonal2;
        cout << "Enter diagonals of rhombus: ";
        cin >> diagonal1 >> diagonal2;
        cout << "Area of rhombus is: " << (diagonal1 * diagonal2) / 2 << endl;
    }
};
int main() {
    Shape* ptr;
    Rectangle r;
    Circle c;
    Square s;
    Rhombus h;  

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    ptr = &s;
    ptr->area();

    ptr = &h;
    ptr->area();

    return 0;
}