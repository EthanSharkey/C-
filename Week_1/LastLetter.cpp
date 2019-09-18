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

	letter = name.substr(len - 1);

	cout << name << " ends with the letter " << letter << endl;

	return 0;
}