#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp >= 25) {
        cout << "The weather is warm/hot." << endl;
    } else {
        cout << "The weather is cool/cold." << endl;
    }
    return 0;
}
