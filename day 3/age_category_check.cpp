// write a program to find of a person is a child, growth, or adult
#include <iostream>
using namespace std;

int main() {
    int age = 19;
    if (age < 13) {
        cout << "child" << endl;
    }
    else if (age >= 13 && age < 18) {
        cout << "growth" << endl;
    }
    else {
        cout << "adult" << endl;
    }
    return 0;
}
