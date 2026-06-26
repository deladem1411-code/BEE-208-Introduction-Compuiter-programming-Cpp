#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "Electrical Component Menu" << endl;
	cout << "1. Resistor" <<  endl;
	cout << "2. Capacitor" << endl;
	cout << "3. Diode" << endl;
	cout << "4. Transistor" << endl;
 	cout << "5. LED" << endl;
 	cout << "Enter your choice (1-5): " << endl;
 	cin >> choice;
 	
	cout << "\nDescription: ";
 	switch (choice){
 		case 1 : 
 			cout << "Resistor: Used to limit current in a circuit." << endl;
 			break;
 		case 2 :
 			cout << "Capacitor: Stores electrical energy in an electric field." << endl;
 			break;
 		case 3 :
 			cout << "Diode: Allows current to flow in only one direction." << endl;
 			break;
 		case 4 : 
 			cout << "Transistor: Used to amplify or switch electrical signal." << endl;
 			break;
 		case 5 :
 		cout<< "LED: A light-emitting diode that glows when current passes through it." << endl;
 		break;
 	default:
 	cout << "Invalid input. Please choose a number between 1 and 5." << endl;
 			}
 				
return 0;	
}