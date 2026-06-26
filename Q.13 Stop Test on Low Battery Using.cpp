#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Battery Voltage Test" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter battery voltage reading " << i << " (V): ";
        cin >> voltage;

        if (voltage < 10.5) {
            cout << "Low battery detected. Test stopped." << endl;
            break;
        } 
       else {
            cout << "Battery voltage normal." << endl;
        }
    }

    return 0;
}