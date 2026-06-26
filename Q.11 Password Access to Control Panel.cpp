#include <iostream>
using namespace std;

int main() {
    int password;

    while (true) {
        cout << "Enter password: ";
        cin >> password;

        if (password = 2080) {
            cout << "Access granted to control panel." << endl;
            break;
        } 
        else {
            cout << "Incorrect password. Try again." << endl;
        }
    }

    return 0;
}