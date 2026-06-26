#include <iostream>
using namespace std;
int main()
{
	float current,rating;
	cout<<"Enter breaker rating (A): ";
	cin>> rating;
	cout<<"Enter measured current (A): ";
	cin>> current;
	
	if (current > rating) {cout<<"Overload detected, circuit breaker should trip" << endl; }
	
	else {cout<< "Current is within safe range" << endl; }
 		
return 0;	
}