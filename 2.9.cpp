#include<iostream>
using namespace std;
const float PRICE = 0.8;
int main()
{
	int day = 1, amount = 2, b = 2;
	float consumption = 0.0, a;
	for (; amount <= 100; day += 1) {
		b *= 2;
		amount = amount + b;
	}
	consumption = (amount - b) * PRICE;
	a = consumption / (day - 1);
	cout << "平均每天花费：" << a;
	return 0;
}