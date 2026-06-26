#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter Voltage (V): "; cin >> voltage;
        cout << "Enter Current (A): "; cin >> current;
        
        if (current != 0) {
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms";
        } else {
            cout << "Error: Current cannot be zero.";
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice != 'N' && choice != 'n');

    return 0;
}