#include <iostream>
using namespace std;
int main() {
    float bill;
    cout << "Enter bill amount: ";
    cin >> bill;
    if (bill >= 500) {
        cout << "You get 5% off. Pay: " << bill * 0.95 << endl;
    } else {
        cout << "No discount. Pay: " << bill << endl;
    }
    return 0;
}
