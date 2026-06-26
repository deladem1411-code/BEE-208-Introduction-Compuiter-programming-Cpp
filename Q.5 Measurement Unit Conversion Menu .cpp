#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "Measurement Unit Conversion Menu" << endl;
    cout << "1. Convert volts to millivolts" << endl;
    cout << "2. Convert amperes to milliamperes" << endl;
    cout << "3. Convert kilowatts to watts" << endl;
    cout << "4. Convert ohms to kilo-ohms" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter voltage (V): ";
            cin >> value;
            result = value * 1000;
            cout << "Voltage = " << result << " mV" << endl;
            break;

        case 2:
            cout << "Enter current (A): ";
            cin >> value;
            result = value * 1000;
            cout << "Current = " << result << " mA" << endl;
            break;

        case 3:
            cout << "Enter power (kW): ";
            cin >> value;
            result = value * 1000;
            cout << "Power = " << result << " W" << endl;
            break;

        case 4:
            cout << "Enter resistance (Ohms): ";
            cin >> value;
            result = value / 1000;
            cout << "Resistance = " << result << " kOhms" << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}