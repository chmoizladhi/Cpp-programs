#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 40) {
        cout << "Congratulations! You passed." << endl;
    }
    return 0;
}
