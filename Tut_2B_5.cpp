#include <iostream>
#include <string>
using namespace std;
int maimai1n() {
	double P, LOA, A, L, arate;
	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "\nEnter number of P, LOA, A and L: ";
	cin >> P >> LOA >> A >> L;
	arate = 100.0*((P + LOA + (L / 2)) / (P + LOA + A + L));
	cout <<"\n"<< name << " your attendance rate is " << arate << "%" << endl;
	return 0;
}