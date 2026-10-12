#include <iostream>
using namespace std;
int main() {
    int age;
    float income;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter monthly income: ";
    cin >> income;
    if (age >= 21) {
        if (income >= 30000) {
            cout << "Loan approved." << endl;
        } else {
            cout << "Income too low for a loan." << endl;
        }
    } else {
        cout << "You must be at least 21." << endl;
    }
    return 0;
}
