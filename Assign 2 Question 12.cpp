#include <iostream>
using namespace std;

int main() {
    double voltage;
    cout << "Enter solar panel initial voltage (V): ";
    cin >> voltage;

    while (voltage >= 18.0) {
        cout << "Enter next solar panel voltage (V): ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." ;
    return 0;
}