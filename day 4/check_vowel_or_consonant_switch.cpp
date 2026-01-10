// write the program whether to chack vowel or consonant using switch case

#include <iostream>
using namespace std;
int main() {
    char ch = 'a'; 
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is a consonant." << endl;
    }
    return 0;
}
