#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Enter number, operator (+ - * /), number: ";
    cin >> a >> op >> b;
    if (op == '+') {
        cout << a + b << endl;
    } else if (op == '-') {
        cout << a - b << endl;
    } else if (op == '*') {
        cout << a * b << endl;
    } else if (op == '/') {
        if (b != 0) cout << a / b << endl;
        else cout << "Cannot divide by zero." << endl;
    } else {
        cout << "Invalid operator." << endl;
    }
    return 0;
}
