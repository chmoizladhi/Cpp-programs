#include <iostream>
using namespace std;
int main() {
    int age;
    char passed;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Did you pass the driving test? (y/n): ";
        cin >> passed;
        if (passed == 'y') cout << "License issued." << endl;
        else cout << "Please pass the test first." << endl;
    } else {
        cout << "You must be 18 or older." << endl;
    }
    return 0;
}
