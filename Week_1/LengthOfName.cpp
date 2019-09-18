#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	int len = 0;

	cout << "Enter name here: ";
	cin >> name;

	len = name.size();

	cout << "Hello " << name << ", your name has " << len << " letters." << endl;



	return 0;
}