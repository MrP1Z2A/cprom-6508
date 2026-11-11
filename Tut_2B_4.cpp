#include <iostream>
using namespace std;
int ddd() {
	int students,group;
	cout << "Enter the number of students in class:"<<endl;
	cin >> students;
	cout << students << " students can form " << students / 3 << " 3-member groups."<<endl;
	cout << students % 3 << " students cannot join in a group";
	return 0;
}