#include <iostream>
using namespace std;

int main() {
    double current;

    cout << "Current Monitoring System" << endl;

    while (true) {
        cout << "Enter current reading (A): ";
        cin >> current;

        if (current > 10) {
            cout << "Overcurrent detected." << endl;
            cout << "Monitoring stopped." << endl;
            break;
        }
    }

    return 0;
}