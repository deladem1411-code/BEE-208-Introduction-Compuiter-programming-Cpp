#include <iostream>
using namespace std;

int main() {
    double power, totalPower = 0;

    cout << "Skip Negative Power Readings" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << " (W): ";
        cin >> power;

        if (power < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        totalPower += power;
    }

    cout << "\nTotal Valid Power Readings = "
         << totalPower << " W" << endl;

    return 0;
}