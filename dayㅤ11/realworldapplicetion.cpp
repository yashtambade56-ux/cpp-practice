// write a c++ program to demonstrate a real life applicetion of a class usin an atm system
// create a class named ATM with a data member balance initialized to 1000
// include functions withdraw and checkBalance

#include <iostream>
using namespace std;

class ATM {
    int balance;
public:
    ATM() {
        balance = 1000;
    }
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        }
    }
    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    ATM atm;
    int choice, amount;
    do {
        cout << "1. Withdraw" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 2:
                atm.checkBalance();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}
