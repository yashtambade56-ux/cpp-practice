#include <iostream>
#include <fstream>
using namespace std;
int main() {    
    ofstream my_file("abc.txt");
    if (!my_file) {
        cout << "File not found" << endl;
    return 1;
    }
    my_file <<"line 4"<<endl;
    my_file <<"line 5"<<endl;
    my_file <<"line 6"<<endl;
    my_file.close();    
    return 0;   
}