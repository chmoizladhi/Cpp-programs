#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle. ";
        if (a == b && b == c) cout << "It is equilateral." << endl;
        else if (a == b || b == c || a == c) cout << "It is isosceles." << endl;
        else cout << "It is scalene." << endl;
    } else {
        cout << "Not a valid triangle." << endl;
    }
    return 0;
}
