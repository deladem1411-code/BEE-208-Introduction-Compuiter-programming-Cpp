#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter two integers: ";
    cin >> first >> second;

    if (first > second)
        cout << "First value is greater";
    else if (second > first)
        cout << "Second value is greater";
    else
        cout << "Both values are equal";

    return 0;
}