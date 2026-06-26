#include <iostream>
using namespace std;

int main() {
    double temperature;
    cout << "Enter cable temperature (°C): ";
    cin >> temperature;

    if (temperature > 70.0) {
        cout << "Cable overheating detected.";
    } else {
        cout << "Cable temperature is within safe range.";
    }

    return 0;
}