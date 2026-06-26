#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter Voltage (V): ";
        cin >> voltage;

        cout << "Enter Current (A): ";
        cin >> current;

        resistance = voltage / current;

        cout << "Resistance = " << resistance << " Ohms" << endl;

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } 
    while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;

    return 0;
}