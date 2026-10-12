#include <iostream>
using namespace std;
int main() {
    int user, pass;
    cout << "Enter user ID: ";
    cin >> user;
    if (user == 101) {
        cout << "Enter password: ";
        cin >> pass;
        if (pass == 9999) {
            cout << "Login successful." << endl;
        } else {
            cout << "Wrong password." << endl;
        }
    } else {
        cout << "User not found." << endl;
    }
    return 0;
}
