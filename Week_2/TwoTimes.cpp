#include <iostream>

using namespace std;

int twoTimes(int num)
{
	return num * 2;
}


int main()
{

	int num = 0;

	cout << "Enter number here: ";
	cin >> num;

	int ans = twoTimes(num);

	cout << "Two times " << num << " is " << ans << endl;

	return 0;
}