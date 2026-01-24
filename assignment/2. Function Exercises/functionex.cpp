#include <iostream>
using namespace std;

// Exercise 1: Print a number
void printNumber(int num) {
    cout << num << endl;
}

// Exercise 2: Add two numbers and print result
void addNumbers(int a, int b) {
    cout << a + b << endl;
}

// Exercise 3: Check even/odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }
}

// Exercise 4: Square a number and print it
void squareNumber(int num) {
    cout << num * num << endl;
}

// Exercise 5: Check positive/negative/zero
void checkSign(int num) {
    if (num > 0) {
        cout << num << " is positive" << endl;
    } else if (num < 0) {
        cout << num << " is negative" << endl;
    } else {
        cout << num << " is zero" << endl;
    }
}

int main() {
    // Exercise 1
    printNumber(5);

    // Exercise 2
    addNumbers(5, 10);

    // Exercise 3
    checkEvenOdd(5);

    // Exercise 4
    squareNumber(5);

    // Exercise 5
    checkSign(5);

    return 0;
}
