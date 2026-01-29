// add twwo numbers using oop concept
//create a class add with:
//two int variables
//a function that adds the numbers and print the sum

#include <iostream>
using namespace std;
class Add {
    int a, b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    void displaySum() {
        cout << "Sum = " << (a + b) << endl;
    }
};
int main() {
    Add addObj;
    addObj.setData(5, 10);
    addObj.displaySum();
    return 0;
}