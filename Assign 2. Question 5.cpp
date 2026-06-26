#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "Measurement Unit Conversion Menu:\n"
         << "1. Convert volts to millivolts\n"
         << "2. Convert amperes to milliamperes\n"
         << "3. Convert kilowatts to watts\n"
         << "4. Convert ohms to kilo-ohms\n"
         << "Enter choice (1-4): ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            result = value * 1000.0;
            cout << value << " V = " << result << " mV" ;
            break;
        case 2:
            result = value * 1000.0;
            cout << value << " A = " << result << " mA";
            break;
        case 3:
            result = value * 1000.0;
            cout << value << " kW = " << result << " W";
            break;
        case 4:
            result = value / 1000.0;
            cout << value << " Ohms = " << result << " kOhm";
            break;
        default:
            cout << "Invalid menu choice.";
    }

    return 0;
}