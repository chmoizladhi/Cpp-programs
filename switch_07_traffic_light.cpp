#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter light color (r, y, g): ";
    cin >> light;
    switch (light) {
        case 'r': cout << "Stop" << endl; break;
        case 'y': cout << "Get ready" << endl; break;
        case 'g': cout << "Go" << endl; break;
        default: cout << "Invalid color." << endl;
    }
    return 0;
}
