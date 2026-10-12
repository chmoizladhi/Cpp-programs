#include <iostream>
using namespace std;
int main() {
    float bill;
    char member;
    cout << "Enter bill amount: ";
    cin >> bill;
    cout << "Are you a member? (y/n): ";
    cin >> member;
    if (member == 'y') {
        if (bill >= 1000) cout << "20% discount." << endl;
        else cout << "10% discount." << endl;
    } else {
        if (bill >= 1000) cout << "5% discount." << endl;
        else cout << "No discount." << endl;
    }
    return 0;
}
