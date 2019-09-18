#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	string letter = "";
	int len = 0;

	cout << "Enter name here: ";
	cin >> name;

	len = name.size();

	letter = name.substr(1, len - 1);

	cout << "Initialless, your name is " << letter << endl;

	return 0;
}