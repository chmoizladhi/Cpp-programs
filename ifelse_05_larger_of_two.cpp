#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) {
        cout << a << " is larger." << endl;
    } else {
        cout << b << " is larger (or both are equal)." << endl;
    }
    return 0;
}
