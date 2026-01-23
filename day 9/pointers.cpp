#include <iostream>
using namespace std;

int main() {
    int var = 5;

    // storge address of var
    int* point_var = &var;

    // print value of var
    cout << "Value of var: " << var << endl;

    // print address of var
    cout << "Address of var: " << &var << endl;

    // print 