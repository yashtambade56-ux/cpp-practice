#include <iostream>
using namespace std;

/* Q1: Pass integer (Call by Value) */
void passValue(int x) {
    x = x + 5;
    cout << "Q1 Result: " << x << endl;
}

/* Q2(a): Subtract (Call by Value) */
void subtract(int a, int b) {
    cout << "Q2 Subtract: " << a - b << endl;
}

/* Q2(b): Multiply (Call by Value) */
void multiply(int a, int b) {
    cout << "Q2 Multiply: " << a * b << endl;
}

/* Q2(c): Add 10 (Call by Value) */
void addTen(int x) {
    cout << "Q2 Add 10: " << x + 10 << endl;
}

/* Q3: Even or Odd (Call by Value) */
void evenOdd(int n) {
    if (n % 2 == 0)
        cout << "Q3 Even" << endl;
    else
        cout << "Q3 Odd" << endl;
}

/* Q4: Factorial (Call by Value) */
void factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Q4 Factorial: " << fact << endl;
}

/* Q5: Cube (Call by Value) */
void cube(int x) {
    cout << "Q5 Cube: " << x * x * x << endl;
}

/* Q6: Swap (Call by Reference) */
void swapNum(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Q7: Increment by 1 (Call by Reference) */
void increment(int &x) {
    x++;
}

/* Q8: Square (Call by Reference) */
void square(int &x) {
    x = x * x;
}

/* Q9: Max of two numbers (Call by Reference) */
void maxNum(int &a, int &b) {
    if (a > b)
        cout << "Q9 Max: " << a << endl;
    else
        cout << "Q9 Max: " << b << endl;
}

/* Q10: Add bonus to salary (Call by Reference) */
void addBonus(int &salary) {
    salary += 2000;
}

/* Q11: Largest of three (Call by Value) */
void largest(int a, int b, int c) {
    if (a >= b && a >= c)
        cout << "Q11 Largest: " << a << endl;
    else if (b >= c)
        cout << "Q11 Largest: " << b << endl;
    else
        cout << "Q11 Largest: " << c << endl;
}

/* Q12: Reverse number (Call by Value) */
void reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Q12 Reverse: " << rev << endl;
}

/* Q13: Simple Interest (Call by Value) */
void simpleInterest(int p, int r, int t) {
    int si = (p * r * t) / 100;
    cout << "Q13 Simple Interest: " << si << endl;
}

/* Q14: Area of circle (Call by Reference) */
void areaCircle(float &r) {
    cout << "Q14 Area: " << 3.14 * r * r << endl;
}

/* Q15: Add grace marks (Call by Reference) */
void addGraceMarks(int &marks) {
    marks += 5;
}

int main() {

    passValue(10);

    subtract(10, 5);
    multiply(4, 5);
    addTen(20);

    evenOdd(7);

    factorial(5);

    cube(3);

    int a = 5, b = 10;
    swapNum(a, b);
    cout << "Q6 Swap: " << a << " " << b << endl;

    int x = 10;
    increment(x);
    cout << "Q7 Increment: " << x << endl;

    int y = 4;
    square(y);
    cout << "Q8 Square: " << y << endl;

    int m = 15, n = 25;
    maxNum(m, n);

    int salary = 15000;
    addBonus(salary);
    cout << "Q10 Salary: " << salary << endl;

    largest(10, 20, 15);

    reverseNum(1234);

    simpleInterest(1000, 5, 2);

    float radius = 7;
    areaCircle(radius);

    int marks = 65;
    addGraceMarks(marks);
    cout << "Q15 Marks: " << marks << endl;

    return 0;
}
