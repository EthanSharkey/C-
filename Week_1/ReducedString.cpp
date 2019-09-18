#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	string word1 = "";
	string word2 = "";
	int len = 0;
	int num = 0;

	cout << "Enter a number and a word here: ";
	cin >> num;
	cin >> name;

	len = name.size();

	word1 = name.substr(0, num);
	word2 = name.substr(num + 1);

	cout << "New word is " << word1 + word2 << endl;

	return 0;
}