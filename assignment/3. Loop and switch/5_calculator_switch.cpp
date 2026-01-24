// Write a C++ program to make a simple calculator using switch statement.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operation (+, -): ";
    cin >> operation;   

    switch (operation)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    default:
        cout << "Invalid operation" << endl;
        break;
    }
    return 0;
}