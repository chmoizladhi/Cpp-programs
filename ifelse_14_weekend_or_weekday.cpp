#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    if (day == 6 || day == 7) {
        cout << "It is the weekend!" << endl;
    } else {
        cout << "It is a weekday." << endl;
    }
    return 0;
}
