#include <iostream>
using namespace std;
int main() {
    int coin;
    cout << "Enter coin (1, 5, 10, 25): ";
    cin >> coin;
    switch (coin) {
        case 1: cout << "Penny" << endl; break;
        case 5: cout << "Nickel" << endl; break;
        case 10: cout << "Dime" << endl; break;
        case 25: cout << "Quarter" << endl; break;
        default: cout << "Unknown coin." << endl;
    }
    return 0;
}
