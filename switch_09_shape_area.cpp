#include <iostream>
using namespace std;
int main() {
    int choice;
    float a, b;
    cout << "1. Square  2. Rectangle  3. Circle  4. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter side: ";
            cin >> a;
            cout << "Area = " << a * a << endl;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> a >> b;
            cout << "Area = " << a * b << endl;
            break;
        case 3:
            cout << "Enter radius: ";
            cin >> a;
            cout << "Area = " << 3.14159 * a * a << endl;
            break;
        case 4:
            cout << "Enter base and height: ";
            cin >> a >> b;
            cout << "Area = " << 0.5 * a * b << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}
