#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n >= 1 && n <= 100) {
        if (n % 2 == 0) cout << n << " is even and in range." << endl;
        else cout << n << " is odd and in range." << endl;
    } else {
        cout << "Number is out of range." << endl;
    }
    return 0;
}
