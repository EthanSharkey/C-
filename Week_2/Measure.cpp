#include <iostream>

using namespace std;

class Measure
{
	public:

	float inches2CM(int inches)
	{
		return inches * 2.54;
	}	
};

int main()
{

	float num, ans;

	Measure obj1;

	cout << "Enter inches here: ";
	cin >> num;

	ans = obj1.inches2CM(num);

	cout << num << " in centimetres is " << ans << endl;

	return 0;

}