#include <iostream>
using namespace std;

int main() {
    double reading, totalValidPower = 0.0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << " (W): ";
        cin >> reading;

        if (reading < 0) {
            cout << "Invalid reading skipped.";
            continue;
        }

        totalValidPower += reading;
    }

    cout << "Total of valid power readings = " << totalValidPower << " W" ;
    return 0;
}