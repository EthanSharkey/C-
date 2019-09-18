#include <iostream>
using namespace std;

int main()
{

	double ans = 0.0;
	double num1 = 0.0;
	double num2 = 0.0;

	cout << "Enter two floating point numbers here: ";
	cin >> num1;
	cin >> num2;

	ans = num1 / num2;

	cout << "Answer is " << ans << endl;

	return 0;
}