#include <iostream>
using namespace std;
int main() {
    float cost, sell;
    cout << "Enter cost price: ";
    cin >> cost;
    cout << "Enter selling price: ";
    cin >> sell;
    if (sell > cost) {
        cout << "Profit of " << sell - cost << endl;
    } else {
        cout << "Loss or no profit. Difference: " << cost - sell << endl;
    }
    return 0;
}
