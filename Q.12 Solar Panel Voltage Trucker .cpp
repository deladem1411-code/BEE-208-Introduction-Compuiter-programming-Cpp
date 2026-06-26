#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Solar Panel Voltage Tracker" << endl;

    while (true) {
        cout << "Enter solar panel voltage (V): ";
        cin >> voltage;

        if (voltage < 18) {
            cout << "Solar panel voltage below operating level." << endl;
            break;
        }
    }

    return 0;
}