#include <iostream>
using namespace std;

int main() {
    double line1, line2, line3, average;

    cout << "Average Current of Three-Phase Readings" << endl;

    for (int i = 1; i <= 6; i++) {
        cout << "\nSet " << i << endl;

        cout << "Enter Line 1 Current (A): ";
        cin >> line1;

        cout << "Enter Line 2 Current (A): ";
        cin >> line2;

        cout << "Enter Line 3 Current (A): ";
        cin >> line3;

        average = (line1 + line2 + line3) / 3;

        cout << "Average Current = " << average << " A" << endl;
    }

    return 0;
}