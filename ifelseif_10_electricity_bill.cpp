#include <iostream>
using namespace std;
int main() {
    int units;
    float bill;
    cout << "Enter units used: ";
    cin >> units;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = units * 7;
    } else if (units <= 300) {
        bill = units * 9;
    } else {
        bill = units * 12;
    }
    cout << "Total bill: " << bill << endl;
    return 0;
}
