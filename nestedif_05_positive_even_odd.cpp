#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) {
        if (n % 2 == 0) cout << "Positive even number." << endl;
        else cout << "Positive odd number." << endl;
    } else {
        cout << "Number is not positive." << endl;
    }
    return 0;
}
