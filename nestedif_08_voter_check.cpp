#include <iostream>
using namespace std;
int main() {
    int age;
    char citizen;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Are you a citizen? (y/n): ";
        cin >> citizen;
        if (citizen == 'y') cout << "You can vote." << endl;
        else cout << "Only citizens can vote." << endl;
    } else {
        cout << "You are too young to vote." << endl;
    }
    return 0;
}
