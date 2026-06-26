#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Battery Voltage Monitoring System" << endl;

    while (true) {
        cout << "Enter battery voltage (V): ";
        cin >> voltage;

        if (voltage < 12) {
            cout << "Battery voltage low." << endl;
            cout << "Recharge required." << endl;
            break;
        }
    }

    return 0;
}