// Sum of Two Numbers
// Write a C++ program to define a function that accepts two integers as arguments and returns their sum. Call the function from main() and display the result.

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << sum(num1, num2) << endl;
    return 0;
}
