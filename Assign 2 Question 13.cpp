#include <iostream>
using namespace std;

int main() {
    double resistance = 0.0;

    while (resistance <= 5.0) {
        cout << "Enter earth resistance reading (Ohms): ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system.";
    return 0;
}