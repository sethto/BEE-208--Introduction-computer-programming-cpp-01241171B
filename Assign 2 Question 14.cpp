#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    int attempts = 0;
    bool accessGranted = false;

    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;
        attempts++;

        if (code == "BEE208") {
            cout << "Access granted.";
            accessGranted = true;
            break;
        }
    }

    if (!accessGranted) {
        cout << "Access denied. Maximum attempts reached.";
    }

    return 0;
}