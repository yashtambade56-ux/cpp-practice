// 5. Bank Account
// Question: Create a class BankAccount. Include:
// · Account number
// · Account holder name
// · Balance
// Add functions to:
// · Deposit money
// · Withdraw money
// · Display balance
// Objective: Learn how objects can maintain and modify data over time.

#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    float balance;
public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        balance = 0.0; // Initial balance
    }
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};
int main() {
    BankAccount account;
    account.input();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();
    return 0;
}