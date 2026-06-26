#include <iostream>
using namespace std;

int main() {
    double power, usageTime, totalEnergy = 0.0;

    for (int i = 1; i <= 8; i++) {
        cout << "Enter power rating for appliance " << i << " (W): ";
        cin >> power;
        cout << "Enter usage time for appliance " << i << " (hours): ";
        cin >> usageTime;
        
        totalEnergy += (power * usageTime);
    }

    cout << "\nTotal energy consumed by all appliances = " << totalEnergy << " watt-hours" ;
    return 0;
}