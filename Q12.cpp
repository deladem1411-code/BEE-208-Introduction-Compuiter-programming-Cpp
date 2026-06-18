#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 != 0 && num % 3 == 0)
        cout << "Number is odd and divisible by 3";
    else
        cout << "Condition not met";

    return 0;
}