#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1. Tea  2. Coffee  3. Juice  4. Water" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1: cout << "Tea costs 2" << endl; break;
        case 2: cout << "Coffee costs 3" << endl; break;
        case 3: cout << "Juice costs 4" << endl; break;
        case 4: cout << "Water costs 1" << endl; break;
        default: cout << "Invalid choice." << endl;
    }
    return 0;
}
