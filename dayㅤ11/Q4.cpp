// check even or odd using oop concept
// create a class check with:
// an int variable
// a function even odd that checks whether the number is even or odd and prints the result

#include <iostream>
using namespace std;

class Check {
    int num;
public:
    void setData(int n) {
        num = n;
    }
    void checkEvenOdd() {
        if (num % 2 == 0) {
            cout << "" << num << " is even." << endl;
        } else {
            cout << "" << num << " is odd." << endl;
        }
    }
};

int main() {
    Check checkObj;
    checkObj.setData(7);
    checkObj.checkEvenOdd();
    return 0;
}