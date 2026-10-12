#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age < 0) {
        cout << "Invalid age." << endl;
    } else if (age <= 12) {
        cout << "Child" << endl;
    } else if (age <= 19) {
        cout << "Teenager" << endl;
    } else if (age <= 59) {
        cout << "Adult" << endl;
    } else {
        cout << "Senior" << endl;
    }
    return 0;
}
