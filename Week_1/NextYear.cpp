#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	int age = 0;

	cout << "Enter name here: ";
	cin >> name;

	cout << "Enter age here: ";
	cin >> age;

	cout << "Hello " << name << " and you will be " << age + 1 << endl;

	return 0;
}