// 2. Rectangle Area and Perimet
// Question: Create a class called Rectangle. The class should include:
// · Data members: length and width
// · A function to calculate area
// · A function to calculate perimeter
// Create an object of the class and display both area and perimeter.
// Objective: Learn how classes can perform calculations using stored data.

#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    void input() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
    float area() {
        return length * width;
    }
    float perimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rect;
    rect.input();
    cout << "Area of the rectangle: " << rect.area() << endl;
    cout << "Perimeter of the rectangle: " << rect.perimeter() << endl;
    return 0;
}