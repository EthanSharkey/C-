#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter number here: ";
	cin >> a;

	b = a;
	a = a * a;

	cout << b << " squared is " << a << endl;

	return 0;
}