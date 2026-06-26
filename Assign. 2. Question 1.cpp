#include <iostream>
using namespace std;

int main() {
    double pf;
    cout << "Enter the power factor: ";
    cin >> pf;

    if (pf < 0.0 || pf > 1.0) {
        cout << "Invalid power factor" ;
    } else if (pf >= 0.0 && pf <= 0.50) {
        cout << "Poor power factor" ;
    } else if (pf > 0.50 && pf <= 0.80) {
        cout << "Fair power factor" ;
    } else if (pf > 0.80 && pf <= 0.95) {
        cout << "Good power factor" ;
    } else {
        cout << "Excellent power factor" ;
    }

    return 0;
}