#include <iostream>
#include <fstream>
using namespace std;
int main() {    
    ifstream my_file("abc.txt");
    if (!my_file) {
        cout << "File not found" << endl;
    return 1;
    }
    string line;
    while (getline(my_file, line)) {
        cout << line << endl;
    }
    my_file.close();    
    return 0;   
}