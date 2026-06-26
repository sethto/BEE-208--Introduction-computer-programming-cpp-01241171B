#include <iostream>
using namespace std;

int main() {
    double reading;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance reading " << i << " (megaohm): ";
        cin >> reading;

        if (reading < 1.0) {
            cout << "Insulation failure detected. Test stopped." ;
            break;
        }
        
        cout << "Insulation reading acceptable." ;
    }

    return 0;
}