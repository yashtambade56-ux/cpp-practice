#include <iostream>
using namespace std;

/* 1. Print value using pointer */
void exercise1() {
    int value = 42;
    int *ptr = &value;
    cout << "1. Value using pointer = " << *ptr << endl;
}

/* 2. Print address using pointer */
void exercise2() {
    int value = 42;
    int *ptr = &value;
    cout << "2. Address using pointer = " << ptr << endl;
}

/* 3. Change value using pointer */
void exercise3() {
    int value = 10;
    int *ptr = &value;
    cout << "3. Before = " << value << endl;
    *ptr = 20;
    cout << "   After = " << value << endl;
}

/* 4. Swap two numbers using pointers */
void exercise4() {
    int x = 10, y = 20;
    int *px = &x, *py = &y;
    int temp;

    cout << "4. Before swap x=" << x << " y=" << y << endl;
    temp = *px;
    *px = *py;
    *py = temp;
    cout << "   After swap x=" << x << " y=" << y << endl;
}

/* 5. Pointer to pointer */
void exercise5() {
    int value = 42;
    int *ptr = &value;
    int **pptr = &ptr;
    cout << "5. Value using pointer to pointer = " << **pptr << endl;
}

/* 6. Pass pointer to function */
void printValue(int *p) {
    cout << "6. Value in function = " << *p << endl;
}
void exercise6() {
    int value = 42;
    printValue(&value);
}

/* 7. Add two numbers using pointers */
void exercise7() {
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    cout << "7. Sum = " << (*pa + *pb) << endl;
}

/* 8. Smallest of two numbers using pointers */
void exercise8() {
    int a = 10, b = 5;
    int *pa = &a, *pb = &b;
    if (*pa < *pb)
        cout << "8. Smallest = " << *pa << endl;
    else
        cout << "8. Smallest = " << *pb << endl;
}

/* 9. Cube of a number using pointer */
void exercise9() {
    int num = 5;
    int *p = &num;
    *p = (*p) * (*p) * (*p);
    cout << "9. Cube of 5 = " << *p << endl;
}

/* 10. Leap year using pointer */
void exercise10() {
    int year = 2024;
    int *p = &year;

    if ((*p % 4 == 0 && *p % 100 != 0) || (*p % 400 == 0))
        cout << "10. " << year << " is a Leap Year" << endl;
    else
        cout << "10. " << year << " is Not a Leap Year" << endl;
}

int main() {
    cout << "=== C++ Pointer Practical Programs ===" << endl << endl;

    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();
    exercise6();
    exercise7();
    exercise8();
    exercise9();
    exercise10();

    return 0;
}
