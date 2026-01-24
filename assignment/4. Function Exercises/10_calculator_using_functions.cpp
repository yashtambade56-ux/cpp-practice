// Simple Calculator Using Functions
// Write a C++ program that performs addition, subtraction, multiplication, and division using separate functions for each operation.

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int main() {
    int x = 10, y = 5; 

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << sub(x, y) << endl;
    cout << "Multiplication: " << mul(x, y) << endl;
    cout << "Division: " << divi(x, y) << endl;

    return 0;
}
