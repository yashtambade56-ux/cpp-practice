// Write a C++ program to find the sum of first 10 natural numbers using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "The sum of the first 10 natural numbers is: " << sum << endl;
    return 0;
}