#include <iostream>
using namespace std;

int main() {
    int result;
    int passCount = 0, failCount = 0;

    cout << "Count Passed Component Tests" << endl;

    for (int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i
             << " (1 = Pass, 0 = Fail): ";
        cin >> result;

        if (result == 1) {
            passCount++;
        } 
        else {
            failCount++;
        }
    }

    cout << "\nPassed Components = " << passCount << endl;
    cout << "Failed Components = " << failCount << endl;

    return 0;
}