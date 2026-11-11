#include <iostream>;
using namespace std;
int i() {
	double chemm, phym, biom,avg,x=0;
	cout << "Enter biology mark:\t";
	cin >> biom;
	x = x + 1;
	cout << "Enter chemistry mark:\t";
	cin >> chemm;
	x = x + 1;
	cout << "Enter phsyics:\t";
	cin >> phym;
	x = x + 1;
	cout << "\n------------------------------------";
	avg = (biom+chemm+phym)/x;
	cout << "\nBiology:\t" << biom << endl;
	cout << "Chemistry:\t" << chemm << endl;
	cout << "Physics:\t" << phym << endl;
	cout << "Average:\t" << avg << endl;
	return 0;
}