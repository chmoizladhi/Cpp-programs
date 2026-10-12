#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp <= 0) {
        cout << "Water is ice (solid)." << endl;
    } else if (temp < 100) {
        cout << "Water is liquid." << endl;
    } else {
        cout << "Water is steam (gas)." << endl;
    }
    return 0;
}
