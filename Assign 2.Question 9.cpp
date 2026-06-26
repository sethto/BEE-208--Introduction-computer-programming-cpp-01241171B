#include <iostream>
using namespace std;

int main() {
    int result, passCount = 0, failCount = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i << " (1 for Pass, 0 for Fail): ";
        cin >> result;

        if (result == 1) {
            passCount++;
        } else {
            failCount++;
        }
    }

    cout << "\nPassed components: " << passCount ;
    cout << "Failed components: " << failCount ;
    return 0;
}