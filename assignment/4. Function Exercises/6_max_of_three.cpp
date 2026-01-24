// Maximum of Three Numbers
// Write a C++ program using a function to find the largest of three numbers passed as arguments.

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    cout << maxOfThree(5, 9, 3);
    return 0;
}
