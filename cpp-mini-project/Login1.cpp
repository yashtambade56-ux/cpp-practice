#include <iostream>
#include <fstream>
#include <string>
#include <functional>

using namespace std;

string hashPassword(string password)
{
    hash<string> hasher;
    return to_string(hasher(password));
}

void registerUser()
{
    string username, password;

    cout << "\n--- Registration ---\n";
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);

    if (file.is_open())
    {
        file << username << " " << hashPassword(password) << endl;
        file.close();
        cout << "✅ Registration Successful!\n";
    }
    else
    {
        cout << "❌ File Error!\n";
    }
}

bool loginUser()
{
    string username, password;
    string storedUser, storedPass;

    cout << "\n--- Login ---\n";
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    string hashedPass = hashPassword(password);

    ifstream file("users.txt");

    if (file.is_open())
    {
        while (file >> storedUser >> storedPass)
        {
            if (storedUser == username && storedPass == hashedPass)
            {
                file.close();
                return true;
            }
        }
        file.close();
    }

    return false;
}

int main()
{
    int choice;

    cout << "=============================\n";
    cout << " Simple Login System (C++)\n";
    cout << "=============================\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "3. Exit\n";
    cout << "Enter Choice: ";

    if (!(cin >> choice))
    {
        cout << "\n❌ Invalid Input! Please enter only number (1/2/3).\n";
        return 0;
    }

    if (choice == 1)
    {
        registerUser();
    }
    else if (choice == 2)
    {
        if (loginUser())
            cout << "✅ Login Successful! Welcome!\n";
        else
            cout << "❌ Invalid Username or Password!\n";
    }
    else if (choice == 3)
    {
        cout << "Exiting Program...\n";
    }\
    
    else
    {
        cout << "❌ Invalid Choice! Enter only 1, 2 or 3.\n";
    }

    return 0;
}