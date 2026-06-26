#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Insulation Resistance Test" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance reading " << i << " (MΩ): ";
        cin >> resistance;

        if (resistance < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        } 
        else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}