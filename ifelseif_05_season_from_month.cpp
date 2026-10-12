#include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter month number (1-12): ";
    cin >> m;
    if (m == 12 || m == 1 || m == 2) {
        cout << "Winter" << endl;
    } else if (m >= 3 && m <= 5) {
        cout << "Spring" << endl;
    } else if (m >= 6 && m <= 8) {
        cout << "Summer" << endl;
    } else if (m >= 9 && m <= 11) {
        cout << "Autumn" << endl;
    } else {
        cout << "Invalid month." << endl;
    }
    return 0;
}
