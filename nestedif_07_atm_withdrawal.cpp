#include <iostream>
using namespace std;
int main() {
    int balance = 5000, pin, amount;
    cout << "Enter PIN: ";
    cin >> pin;
    if (pin == 1234) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Success. Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    } else {
        cout << "Incorrect PIN." << endl;
    }
    return 0;
}
