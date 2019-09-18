#include <iostream>

using namespace std;

int SquareIt(int num)
{
	return num * num;
}


int main()
{

	int num = 0;

	cout << "Enter number here: ";
	cin >> num;

	int ans = SquareIt(num);

	cout << num << " squared is " << ans << endl;

	return 0;
}