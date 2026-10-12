#include <iostream>
using namespace std;
int main() {
    float amount;
    cout << "Enter order amount: ";
    cin >> amount;
    if (amount >= 50) {
        cout << "You qualify for free shipping." << endl;
    }
    return 0;
}
