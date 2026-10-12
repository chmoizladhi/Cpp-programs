#include <iostream>
using namespace std;
int main() {
    int marks, test;
    cout << "Enter your marks (0-100): ";
    cin >> marks;
    if (marks >= 60) {
        cout << "Enter entrance test score (0-100): ";
        cin >> test;
        if (test >= 50) {
            cout << "Admission granted." << endl;
        } else {
            cout << "Failed the entrance test." << endl;
        }
    } else {
        cout << "Marks too low for admission." << endl;
    }
    return 0;
}
