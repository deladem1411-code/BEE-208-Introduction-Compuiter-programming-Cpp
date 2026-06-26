#include <iostream>
using namespace std;

int main() {
    double current;
    int safeCount = 0, unsafeCount = 0;

    cout << "Count Safe and Unsafe Current Readings" << endl;
    cout << "Enter 8 current readings:" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Reading " << i << " (A): ";
        cin >> current;

        if (current <= 10) {
            safeCount++;
        } else {
            unsafeCount++;
        }
    }

    cout << "\nNumber of Safe Readings: " << safeCount << endl;
    cout << "Number of Unsafe Readings: " << unsafeCount << endl;

    return 0;
}