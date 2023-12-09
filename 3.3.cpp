#include<iostream>
#include "mytemperature.h"
#include<iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	double cel0, fah0;
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	for (int i = 0; i < 10; i++)
	{
		cel0 = 40.0 - i;
		fah0 = 120.0 - 10 * i;
		cout << cel0 << "    " << celsius_to_fah(cel0) << "   |   " << fah0 << "       " << fahrenheit_to_cels(fah0) << "\t" << endl;
	}
	return 0;
}