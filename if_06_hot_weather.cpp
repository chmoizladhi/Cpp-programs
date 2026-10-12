#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp > 35) {
        cout << "It is very hot. Stay hydrated!" << endl;
    }
    return 0;
}
