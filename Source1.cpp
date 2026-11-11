#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int d() {
	const double PI = 3.14;
	double x, radian;
	radian = 60 * PI / 180;
	x = sin(radian);
	cout << x;
	return 0;
}