// Write a C++ program to check whether a number is even or odd using switch statement.

#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    switch (number % 2)
    {
    case 0:
        cout << number << " is even." << endl;
        break;
    case 1:
        cout << number << " is odd." << endl;
        break;
    default:
        cout << "Unexpected error!" << endl;
        break;
    }
    return 0;
}