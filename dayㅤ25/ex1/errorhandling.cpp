#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream my_file("abc.txt");

    if (!my_file) {

        cout << "Error in creating file!" << endl;

        return 1; // Exit with an error code
    }

    my_file.close();

    return 0;
}