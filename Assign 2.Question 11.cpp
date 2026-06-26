#include <iostream>
using namespace std;

int main() {
    double temperature = 0.0;

    while (temperature <= 90.0) {
        cout << "Enter motor temperature (°C): ";
        cin >> temperature;
        
        if (temperature > 90.0) {
            cout << "Motor temperature unsafe. Stop motor test.";
        }
    }

    return 0;
}