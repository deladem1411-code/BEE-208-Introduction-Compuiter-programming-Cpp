#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power, resistance, time, energy;

    cout << "Power Rating Menuj " << endl;
    cout << "1. Calculate DC Power" << endl;
    cout << "2. Calculate Resistance using Ohm's Law" << endl;
    cout << "3. Calculate Energy Consumption" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nEnter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;

            power = voltage * current;
            cout << "DC Power = " << power << " Watts" << endl;
            break;

        case 2:
            cout << "\nEnter Voltage (V): ";
            cin >> voltage;
            cout << "Enter Current (A): ";
            cin >> current;

            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms" << endl;
            break;

        case 3:
            cout << "\nEnter Power (W): ";
            cin >> power;
            cout << "Enter Time (hours): ";
            cin >> time;

            energy = power * time;
            cout << "Energy Consumption = " << energy << " Wh" << endl;
            break;

        default:
            cout << "Invalid choice! Please select between 1 and 3." << endl;
    }

    return 0;
}