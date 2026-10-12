#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Enter number, operator (+ - * /), number: ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b << endl; break;
        case '-': cout << a - b << endl; break;
        case '*': cout << a * b << endl; break;
        case '/':
            if (b != 0) cout << a / b << endl;
            else cout << "Cannot divide by zero." << endl;
            break;
        default: cout << "Invalid operator." << endl;
    }
    return 0;
}
