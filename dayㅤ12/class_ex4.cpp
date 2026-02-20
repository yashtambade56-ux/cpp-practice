// 4. Employee Salary Details
// Question: Create a class Employee. The class should contain:
// · Employee ID
// · Employee name
// · Basic salary
// Create a function to calculate and display the total salary.
// Objective: Understand real-life modeling using classes and objects.

#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int id;
    string name;
    float basicSalary;
public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    float calculateTotalSalary() {

        float hra = 0.20 * basicSalary;
        float da = 0.10 * basicSalary;
        return basicSalary + hra + da;
    }
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Salary: " << calculateTotalSalary() << endl;
    }
};
int main() {
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}