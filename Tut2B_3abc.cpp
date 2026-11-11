#include <iostream>
using namespace std;
int f() {


	double depth, width, height, totala,cost;

	 
	cout << "Enter the depth in m: ";
	cin >> depth;
	cout << "Enter the width on m: ";
	cin >> width;
	cout << "Enter the height in m:";
	cin >> height;

	totala = ((width * height) * 2) + ((depth * height) * 2) + (depth * width);
	cost = totala * 2.5;


	cout << "\nTotal Area is " << totala << " meters.";
	cout << "Labour cost is $" << cost;

	return 0;
}
