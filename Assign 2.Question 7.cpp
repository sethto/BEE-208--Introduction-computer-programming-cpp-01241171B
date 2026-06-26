#include <iostream>
using namespace std;

int main() {
    double wattage, totalPower = 0.0;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter wattage for lighting point " << i << " (W): ";
        cin >> wattage;
        totalPower += wattage;
    }

    cout << "Total lighting load = " << totalPower << " W" ;
    return 0;
}