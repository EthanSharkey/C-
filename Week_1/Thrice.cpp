#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int ans = 0;

	cout << "Enter first number here: ";
	cin >> a;

	cout << "Enter second number here: ";
	cin >> b;

	cout << "Enter third number here: ";
	cin >> c;

	ans = a * b * c;

	cout << "The product of " << a << " and " << b << " and " << c << " is " << ans << endl;

	return 0;
}