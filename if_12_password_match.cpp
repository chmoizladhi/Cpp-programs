#include <iostream>
using namespace std;
int main() {
    int pin;
    cout << "Enter your PIN: ";
    cin >> pin;
    if (pin == 1234) {
        cout << "Access granted." << endl;
    }
    return 0;
}
