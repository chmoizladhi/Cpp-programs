#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 60) {
        cout << "You get a senior citizen discount." << endl;
    }
    return 0;
}
