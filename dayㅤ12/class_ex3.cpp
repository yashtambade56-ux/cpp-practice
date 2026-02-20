// 3. Simple Calculator
// Question: Create a class Calculator that performs basic arithmetic operations. Include:
// · Two integer data members
// · Functions for addition, subtraction, multiplication, and division
// Call each function using an object.
// Objective: Practice writing multiple member functions in a class.

#include <iostream>
using namespace std;
class Calculator {
private:
    int num1;
    int num2;
public:
    void input() {
        cout << "Enter first integer: ";
        cin >> num1;
        cout << "Enter second integer: ";
        cin >> num2;
    }
    int add() {
        return num1 + num2;
    }
    int subtract() {
        return num1 - num2;
    }
    int multiply() {
        return num1 * num2;
    }
    float divide() {
        if (num2 != 0)
            return static_cast<float>(num1) / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};
int main() {
    Calculator calc;
    calc.input();
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    return 0;
}