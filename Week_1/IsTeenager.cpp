#include <iostream>

using namespace std;

int main()
{

	int age = 0;

	cout << "Enter your age: ";
	cin >> age;

	if (age < 12 or age > 19)
		cout << "You are not a teenager." << endl;
	else
		cout << "You are a teenager." << endl;

	return 0;
}