#include <iostream>

using namespace std;

class Product
{
	public:

	
	int multiply(int num1, int num2)
	{
		return num1 * num2;
	}
};


int main()
{

	Product obj1;

	int ans = 0;
	int num1, num2;

	cout << "Enter two numbers: ";
	cin >> num1;
	cin >> num2;

	ans = obj1.multiply(num1, num2);

	cout << "Answer is " << ans << endl;

	return 0;
}