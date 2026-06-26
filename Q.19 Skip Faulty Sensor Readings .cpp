#include <iostream>
using namespace std;

int main() {
    double reading, total = 0, average;
    int count = 0;

    cout << "Skip Faulty Sensor Readings" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;

        if (reading == 999) {
            cout << "Faulty sensor reading. Skipped." << endl;
            continue;
        }

        total += reading;
        count++;
    }

    if (count > 0) {
        average = total / count;
        cout << "\nAverage Reading = " << average << endl;
    } 
    else {
        cout << "\nNo valid sensor readings." << endl;
    }

    return 0;
}