#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Fuse Selection Menu" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Application: Lighting circuits." << endl;
            break;

        case 2:
            cout << "Application: Small household appliances." << endl;
            break;

        case 3:
            cout << "Application: Socket outlets and portable appliances." << endl;
            break;

        case 4:
            cout << "Application: Water heaters and medium electrical loads." << endl;
            break;

        case 5:
            cout << "Application: Electric cookers and heavy-duty circuits." << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}