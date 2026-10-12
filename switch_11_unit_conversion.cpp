#include <iostream>
using namespace std;
int main() {
    int choice;
    double value;
    cout << "1. Km to Miles  2. Kg to Pounds  3. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter the value: ";
    cin >> value;
    switch (choice) {
        case 1: cout << value * 0.621371 << " miles" << endl; break;
        case 2: cout << value * 2.20462 << " pounds" << endl; break;
        case 3: cout << value * 9 / 5 + 32 << " F" << endl; break;
        default: cout << "Invalid choice." << endl;
    }
    return 0;
}
