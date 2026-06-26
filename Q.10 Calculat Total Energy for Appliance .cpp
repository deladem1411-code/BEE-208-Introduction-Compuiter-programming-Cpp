#include <iostream>
using namespace std;

int main() {
    double power, time, energy, totalEnergy = 0;

    cout << "Calculate Total Energy for Appliances" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << endl;

        cout << "Enter Power Rating (W): ";
        cin >> power;

        cout << "Enter Usage Time (hours): ";
        cin >> time;

        energy = power * time;
        totalEnergy += energy;
    }

    cout << "\nTotal Energy Consumed = " << totalEnergy << " Wh" << endl;

    return 0;
}