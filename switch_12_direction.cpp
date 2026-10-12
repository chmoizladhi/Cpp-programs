#include <iostream>
using namespace std;
int main() {
    char dir;
    cout << "Enter direction (N, S, E, W): ";
    cin >> dir;
    switch (dir) {
        case 'N': cout << "You are going North." << endl; break;
        case 'S': cout << "You are going South." << endl; break;
        case 'E': cout << "You are going East." << endl; break;
        case 'W': cout << "You are going West." << endl; break;
        default: cout << "Invalid direction." << endl;
    }
    return 0;
}
