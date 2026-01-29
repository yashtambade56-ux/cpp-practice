// find square using oop concept
// create a class check with:
// an int variable
// a function square that calculates and prints the square of the number

#include <iostream>
using namespace std;    
class Square {
    int num;
public:
    void setData(int n) {
        num = n;
    }   
    void displaySquare() {
        cout << "Square of " << num << " is " << (num * num) << endl;
    }
};  
int main() {
    Square squareObj;
    squareObj.setData(6);
    squareObj.displaySquare();
    return 0;
}