#include <iostream>
using namespace std;

int main ()
{
	const double CM = 2.54;
	int inches = 0.0;
	double ans = 0.0;

	cout << "Enter a quantity in inches please: ";
	cin >> inches;

	ans = CM * inches;

	cout << inches << " in centimetres is " << ans << "cm" << endl;

	return 0;
}