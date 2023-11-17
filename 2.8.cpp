#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a, x1, x2;
	cout << "请输入一个a：";
	cin >> a;
	x1 = a;
	x2 = 0.5 * (x1 + a / x1);
	if (a > 0) {
		for (; abs(x2 - x1) > 0.00001;) {
			x1 = x2;
			x2 = 0.5 * (x1 + a / x1);
			cout << "1" << endl;
		}
		cout << "a的平方根为：" << x2;
	}
	else if (a == 0) {
		x2 = 0;
		cout << "a的平方根为：" << x2;
	}
	else cout << "负数不可开平方根";
	return 0;
}