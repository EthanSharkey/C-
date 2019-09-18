#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	int num2 = 0;
	
	cout << "Enter two numbers here: ";
	cin >> num1;
	cin >> num2;

	if (num1 > num2)
		cout << "The number " << num1 << " is bigger." << endl;
	else
		cout << "The number " << num2 << " is bigger." << endl;

	return 0;
}