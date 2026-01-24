// Write a C++ program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int number = 7; 
    cout << "Multiplication table of " << number << " is:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}