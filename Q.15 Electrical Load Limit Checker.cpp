#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    cout << "Electrical Load Limit Checker" << endl;

    while (totalLoad <= 3000) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;
        cout << "Current Total Load = " << totalLoad << " W" << endl;

        if (totalLoad > 3000) {
            cout << "Load limit exceeded." << endl;
            cout << "Do not add more appliances." << endl;
            break;
        }
    }

    return 0;
}