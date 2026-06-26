#include <iostream>
using namespace std;

int main() {
    double ratedCurrent, startingCurrent;
    cout << "Enter rated current (A): ";
    cin >> ratedCurrent;
    cout << "Enter starting current (A): ";
    cin >> startingCurrent;

    if (startingCurrent > 3.0 * ratedCurrent) {
        cout << "High starting current. Use proper motor starter.";
    } else {
        cout << "Starting current is acceptable.";
    }

    return 0;
}