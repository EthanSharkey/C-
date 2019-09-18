#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	string nickname = "";

	cout << "Enter name here: ";
	cin >> name;

	nickname = name.substr(0, 3);

	cout << "Your nickname is " << nickname << endl;

	return 0;
}