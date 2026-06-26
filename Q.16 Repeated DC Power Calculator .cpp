#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char choice;

    do {
        cout << "Enter Voltage (V): ";
        cin >> voltage;

        cout << "Enter Current (A): ";
        cin >> current;

        power = voltage * current;

        cout << "Power = " << power << " Watts" << endl;

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;

    return 0;
}