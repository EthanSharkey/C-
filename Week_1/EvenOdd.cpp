#include <iostream>

using namespace std;

int main()
{

	int num = 0;
	
	cout << "Enter number here: ";
	cin >> num;

	if (num % 2 == 0)
		cout << "The number " << num << " is even." << endl;
	else
		cout << "The number " << num << " is odd." << endl;

	return 0;
}