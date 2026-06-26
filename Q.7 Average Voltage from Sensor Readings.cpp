#include <iostream>
using namespace std;

int main() {
    double voltage, totalVoltage = 0, averageVoltage;

    cout << "Average Voltage from Sensor Readings" << endl;
    cout << "Enter 10 voltage readings: " << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Reading " << i << " (V): ";
        cin >> voltage;
        totalVoltage += voltage;
    }

    averageVoltage = totalVoltage / 10;

    cout << "\nTotal Voltage = " << totalVoltage << " V" << endl;
    cout << "Average Voltage = " << averageVoltage << " V" << endl;

    return 0;
}