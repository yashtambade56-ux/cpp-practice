// print an integer using class
// cont int variable one function to display the value vreate an object and print and print the number

#include <iostream>
using namespace std;

class print {
    int a;

public:
    void setData(int n) {
        a = n;
    }
    void display() {
        cout << "The number is: " << a << endl;
    }
};

int main() {
    print p1;
    p1.setData(10);
    p1.display();
    return 0;
}