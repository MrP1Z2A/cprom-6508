#include <iostream>
#include <cmath>
using namespace std;
int ddaadmain() {
	double mark;
	cout << "Enter the mark: ";
	cin >> mark;
	cout << sqrt(5);
	if (mark > 100 || mark < 0) cout << "Marks entered is invalid\n";
	else if (mark <= 100 && mark >= 80) cout << "GPA :4.0 , Grade:A\n";
	else if (mark < 80 && mark >= 70) cout << "GPA :3.0 , Grade:B\n";
	else if (mark < 70 && mark >= 60) cout << "GPA :2.0 , Grade:C\n";
	else if (mark < 60 && mark >= 50) cout << "GPA :1.0 , Grade:D\n";
	else if (mark < 50 && mark >= 45) cout << "GPA :0.5 , Grade:D-\n";
	else if (mark < 45) cout << "GPA :0.0 , Grade:F";
	return 0;
	
}