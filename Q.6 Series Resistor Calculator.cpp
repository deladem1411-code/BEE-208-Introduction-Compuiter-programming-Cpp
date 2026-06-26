#include <iostream>
using namespace std;

int main() {
    double resistor, totalResistance = 0;

    cout << "Series Resistor Calculator" << endl;
    cout << "Enter the values of 5 resistors:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Resistor " << i << " (Ohms): ";
        cin >> resistor;
        totalResistance += resistor;
    }

    cout << "\nTotal Resistance = " << totalResistance << " Ohms" << endl;

    return 0;
}