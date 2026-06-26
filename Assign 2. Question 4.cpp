#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Fuse Selection Menu:\n"
         << "1. 5 A Fuse\n"
         << "2. 10 A Fuse\n"
         << "3. 13 A Fuse\n"
         << "4. 20 A Fuse\n"
         << "5. 32 A Fuse\n"
         << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Suitable for low-power domestic appliances like lamps.";
            break;
        case 2:
            cout << "Suitable for medium domestic appliances like small heaters.";
            break;
        case 3:
            cout << "Suitable for standard ring main appliances like kettles.";
            break;
        case 4:
            cout << "Suitable for heavier domestic or light industrial circuits.";
            break;
        case 5:
            cout << "Suitable for high-power industrial equipment or cookers.";
            break;
        default:
            cout << "Invalid menu selection.";
    }

    return 0;
}