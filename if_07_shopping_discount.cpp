#include <iostream>
using namespace std;
int main() {
    float bill;
    cout << "Enter total bill: ";
    cin >> bill;
    if (bill > 1000) {
        bill = bill - bill * 0.10;
        cout << "10% discount applied." << endl;
    }
    cout << "Amount to pay: " << bill << endl;
    return 0;
}
