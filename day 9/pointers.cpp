#include <iostream>
using namespace std;

int main() {
    int var = 5;

    // storge address of var
    int* point_var = &var;

    // print value of var
    cout << "Value of var: " << var << endl;

    // print address of var
    cout << "Address of var: = " << &var << endl;

    // print pointer point var
    cout << "Pointer point var: " << point_var << endl;

    // print the content of the address point_var pointes 2
    cout << "contant of the address point_var pointes: " << *point_var << endl;

    return 0;
}
