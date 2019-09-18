#include <iostream>
using namespace std;


int main()
{
    int celsius = 0;
    double ans = 0.00;

    cout << "Enter temperature in celsius here: ";
    cin >> celsius;

    ans = celsius * 9/5 + 32;

    cout << "Temperature in fahrenheit is " << ans << endl;

    return 0;
}