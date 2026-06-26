#include <iostream>
using namespace std;

int main()
{
	float gpa;
	cout << "Enter GPA: " ;
	cin >> gpa;
	
	if (gpa >= 3.5)
	{ cout<< "Eligible for Engineering Scholarship."; }
	
	else {cout<< "Not eligible for Engineering Scholarship."; }
	
	return 0;
}