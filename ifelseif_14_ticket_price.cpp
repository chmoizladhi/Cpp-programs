#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 5) {
        cout << "Ticket price: Free" << endl;
    } else if (age <= 17) {
        cout << "Ticket price: 5" << endl;
    } else if (age <= 59) {
        cout << "Ticket price: 10" << endl;
    } else {
        cout << "Ticket price: 7" << endl;
    }
    return 0;
}
