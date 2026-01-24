// Write a C++ program to find the factorial of a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << "The factorial of " << number << " is: " << factorial << endl;
    return 0;
}