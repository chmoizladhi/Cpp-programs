#include <iostream>
using namespace std;
int main() {
    int sales;
    cout << "Enter your monthly sales: ";
    cin >> sales;
    if (sales >= 10000) {
        cout << "Great job! You earned a bonus." << endl;
    }
    return 0;
}
