// Square and Cube Using Functions
// Write a C++ program that uses two separate functions to calculate the square and cube of a given number.

#include <iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Square: " << square(number) << endl;
    cout << "Cube: " << cube(number) << endl;
    return 0;
}