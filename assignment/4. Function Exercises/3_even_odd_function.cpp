// Even or Odd
// Write a C++ program to create a function that takes an integer as an argument and returns whether the number is even or odd.

#include <iostream>
using namespace std;

void check() {
    int n = 7;
    if(n % 2 == 0)
    cout << "even";
    else
    cout << "odd";
}
int main() {
    check();
    return 0;
}