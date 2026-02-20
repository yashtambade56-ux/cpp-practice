// write a program to chake factorial useing recursion

#include <iostream>
using namespace std;

int factorial(int);
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    }else {
        cout << "The factorial of " << n << " is " << factorial(n);
    }
    return 0;
    }

int factorial(int n){
    if (n == 0) {
        return 1;
    }else {
        return n * factorial(n - 1);
    }
}