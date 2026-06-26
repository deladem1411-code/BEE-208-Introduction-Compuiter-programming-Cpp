#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage;
    double turnsRatio;

    cout << "Transformer Ratio Calculator Menu" << endl;
    cout << "1. Calculate Turns Ratio" << endl;
    cout << "2. Calculate Secondary Voltage" << endl;
    cout << "3. Calculate Primary Voltage" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;

            turnsRatio = primaryTurns / secondaryTurns;

            cout << "Turns Ratio = " << turnsRatio << endl;
            break;

        case 2:
            cout << "Enter Primary Voltage (V): ";
            cin >> primaryVoltage;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;

            secondaryVoltage = (primaryVoltage * secondaryTurns) / primaryTurns;

            cout << "Secondary Voltage = " << secondaryVoltage << " V" << endl;
            break;

        case 3:
            cout << "Enter Secondary Voltage (V): ";
            cin >> secondaryVoltage;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;

            primaryVoltage = (secondaryVoltage * primaryTurns) / secondaryTurns;

            cout << "Primary Voltage = " << primaryVoltage << " V" << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}