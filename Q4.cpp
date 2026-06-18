#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    if (text == "hello")
        cout << "Hello!";
    else
        cout << "Goodbye!";

    return 0;
}