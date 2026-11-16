#include <iostream>
using namespace std;
int amain() {
	//1. Declare variables
	double bmi, weight, height;
	cout << "Please enter your weight and height in m.";

	//2. Input data
	cin >> weight >> height;

	//3. Computation

	bmi = weight / (height * height);

	//4. Output results
	cout << "Your BMI is " << bmi << endl;
	
	return 0;
}