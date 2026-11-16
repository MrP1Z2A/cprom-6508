//Guided exercise: Speed of Sound
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int T;
	double v;
	cout << left << fixed << setprecision(2)
		<< setw(25) << "T" << "v" << endl;
	//Initialization
	T = 20;
	while (T <= 40)//condtion to repeat
	{
		//compute v
		v = 331 * sqrt(1 + T / 273.0);
		//display T and V
		cout <<setw(25)<<T<<v<< endl;
		//modification
		T += 2;//T=T+2;

	}
	system("pause");
	return 0;
}