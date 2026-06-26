#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Earth Resistance Test" << endl;

    while (true) {
        cout << "Enter earth resistance (Ohms): ";
        cin >> resistance;

        if (resistance > 5) {
            cout << "Earth resistance too high. Improve earthing system." << endl;
            break;
        }
    }

    return 0;
}