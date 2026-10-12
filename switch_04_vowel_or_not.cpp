#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a lowercase letter: ";
    cin >> ch;
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is not a vowel." << endl;
    }
    return 0;
}
