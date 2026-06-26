#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0.0;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter appliance power rating " << i << " (W): ";
        cin >> power;

        if (totalLoad + power > 5000.0) {
            cout << "Maximum load exceeded. Stop adding appliances." ;
            break;
        }

        totalLoad += power;
    }

    cout << "Final total load: " << totalLoad << " W" ;
    return 0;
}