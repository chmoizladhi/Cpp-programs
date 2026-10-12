#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    if (a != 0) {
        int d = b * b - 4 * a * c;
        if (d > 0) cout << "Two distinct real roots." << endl;
        else if (d == 0) cout << "One repeated real root." << endl;
        else cout << "No real roots." << endl;
    } else {
        cout << "Not a quadratic equation (a cannot be 0)." << endl;
    }
    return 0;
}
