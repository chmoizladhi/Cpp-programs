#include <iostream>
using namespace std;
int main() {
    int marks;
    float income;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    cout << "Enter yearly family income: ";
    cin >> income;
    if (marks >= 85) {
        if (income < 20000) {
            cout << "Full scholarship." << endl;
        } else {
            cout << "Half scholarship." << endl;
        }
    } else {
        cout << "No scholarship." << endl;
    }
    return 0;
}
