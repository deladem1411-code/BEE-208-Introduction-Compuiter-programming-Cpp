#include <iostream>
using namespace std;

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = stoi(binary, nullptr, 2);

    cout << "Decimal: " << dec << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}