#include <iostream>
using namespace std;

int main() {
    double wattage, totalPower = 0;

    cout << "Total Power of Lighting Points" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter wattage of lighting point " << i << " (W): ";
        cin >> wattage;

        totalPower += wattage;
    }

    cout << "\nTotal Lighting Load = " << totalPower << " Watts" << endl;

    return 0;
}