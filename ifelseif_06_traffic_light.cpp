#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter light color (r = red, y = yellow, g = green): ";
    cin >> light;
    if (light == 'r') {
        cout << "Stop" << endl;
    } else if (light == 'y') {
        cout << "Get ready" << endl;
    } else if (light == 'g') {
        cout << "Go" << endl;
    } else {
        cout << "Invalid color." << endl;
    }
    return 0;
}
