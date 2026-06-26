#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns, primaryVoltage, secondaryVoltage;

    cout << "Transformer Ratio Calculator Menu:\n"
         << "1. Calculate turns ratio\n"
         << "2. Calculate secondary voltage\n"
         << "3. Calculate primary voltage\n"
         << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Primary Turns: "; cin >> primaryTurns;
            cout << "Enter Secondary Turns: "; cin >> secondaryTurns;
            cout << "Turns Ratio = " << (primaryTurns / secondaryTurns) ;
            break;
        case 2:
            cout << "Enter Primary Voltage (V): "; cin >> primaryVoltage;
            cout << "Enter Secondary Turns: "; cin >> secondaryTurns;
            cout << "Enter Primary Turns: "; cin >> primaryTurns;
            secondaryVoltage = (primaryVoltage * secondaryTurns) / primaryTurns;
            cout << "Secondary Voltage = " << secondaryVoltage << " V" ;
            break;
        case 3:
            cout << "Enter Secondary Voltage (V): "; cin >> secondaryVoltage;
            cout << "Enter Primary Turns: "; cin >> primaryTurns;
            cout << "Enter Secondary Turns: "; cin >> secondaryTurns;
            primaryVoltage = (secondaryVoltage * primaryTurns) / secondaryTurns;
            cout << "Primary Voltage = " << primaryVoltage << " V" ;
            break;
        default:
            cout << "Invalid selection." ;
    }

    return 0;
}