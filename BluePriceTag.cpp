//Ye Yint Thura 2634580
#include <iostream>
using namespace std;
int main() 
{
	//1.. variable declaration
	double price, amount;
	int quantity;
	char code;

	//2. input
	cout << "Enter the selling price of the product: ";
	cin >> price;
	cout << "Enter the color code of the price tag (B for Blue and G for Green): ";
	cin >> code;
	cout << "Enter the quantity you wish to purchase:";
	cin >> quantity;
	//3. process
	if (code == 'B' || code == 'b')
	{
		cout << "The product is entitled to a 10% discount.\n";
		amount = price * quantity * 0.9;
	}
	else
	{
		amount = price * quantity;

	}

	//4. output
	cout << "The amount payable is $ " << amount << endl;

	system("pause");
	return 0;

}