#include <iostream>

using namespace std;

int main()
{

	int num = 0;
	
	cout << "Enter number here: ";
	cin >> num;

	if (num < 0)
		cout << "The absolute value is " << num * -1 << endl;
	else
		cout << "The absolute value is " << num << endl;

	return 0;
}