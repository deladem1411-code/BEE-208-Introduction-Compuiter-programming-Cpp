#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    if (text.find('a') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'a'";

    return 0;
}