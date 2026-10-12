#include <iostream>
using namespace std;
int main() {
    int password;
    cout << "Enter password: ";
    cin >> password;
    if (password == 4321) {
        cout << "Login successful." << endl;
    } else {
        cout << "Wrong password." << endl;
    }
    return 0;
}
