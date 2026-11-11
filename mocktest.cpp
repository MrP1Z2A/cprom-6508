#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double v, A, Ad, Ar, Fn, Fx;
	const double PI = 3.141592;
	const double rho = 1000;
	cout << left << "Enter v (m/s)," << " A (mm2) and Ad (degree): ";
	cin >> v >> A >> Ad;
	Ar = (Ad) * (PI / 180);
	Fn = (rho * A * (v * v) * sin(Ar)) / 1000000;
	Fx = Fn * sin(Ar);
	cout << fixed << setprecision(2) << left;
	cout << setw(15) << "Ar" << setw(15) << "Fn" << setw(15) << "Fx" << endl;
	cout << setw(15) << Ar << setw(15) << Fn << setw(15) << Fx << endl;
	return 0;
} 