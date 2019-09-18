#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	string letter = "";

	cout << "Enter name here: ";
	cin >> name;

	letter = name.substr(0, 1);

	cout << name << " starts with the letter " << letter << endl;

	return 0;
}