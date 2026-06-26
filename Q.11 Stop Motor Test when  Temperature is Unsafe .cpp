#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Motor Temperature Test" << endl;

    while (true) {
        cout << "Enter motor temperature (°C): ";
        cin >> temperature;

        if (temperature > 90) {
            cout << "Motor temperature unsafe. Stop motor test." << endl;
            break;
        }
    }

    return 0;
}