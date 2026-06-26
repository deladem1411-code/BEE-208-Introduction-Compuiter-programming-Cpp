#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power, resistance, time, energy;

    do {
        cout << "\n ELECTRICAL CALCULATOR" << endl;
        cout << "1. Calculate Power" << endl;
        cout << "2. Calculate Resistance" << endl;
        cout << "3. Calculate Energy" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                power = voltage * current;
                cout << "Power = " << power << " Watts" << endl;
                break;

            case 2:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                resistance = voltage / current;
                cout << "Resistance = " << resistance << " Ohms" << endl;
                break;

            case 3:
                cout << "Enter Power (W): ";
                cin >> power;
                cout << "Enter Time (hours): ";
                cin >> time;
                energy = power * time;
                cout << "Energy = " << energy << " Wh" << endl;
                break;

            case 4:
                cout << "Exiting Electrical Calculator..." << endl;
                break;

            default:
                cout << "Invalid choice! Please select 1 to 4." << endl;
        }

    }
    	 while (choice != 4);

    return 0;
}