#include <iostream>
using namespace std;

int main() {
    double temperature, total = 0, average;
    int validCount = 0;

    cout << "Temperature Monitoring System" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter temperature reading " << i << " (°C): ";
        cin >> temperature;

        if (temperature < 0) {
            cout << "Invalid reading. Skipped." << endl;
            continue;
        }

        total += temperature;
        validCount++;
    }

    if (validCount > 0) {
        average = total / validCount;
        cout << "\nAverage Temperature = " << average << " °C" << endl;
    } 
    else {
        cout << "\nNo valid temperature readings entered." << endl;
    }

    return 0;
}