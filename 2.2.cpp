#include<iostream>
using namespace std;
int main() {                 //输入x计算表达式的值
	float x, y;
	cout << "请输入x的值：";
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - x * 2;
		cout << "y=" << y;
	}
	else if (x >= 1 && x < 5) {
		y = 1 + 2 / (4 * x);
		cout << "y=" << y;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y=" << y;
	}
	else
		cout << "您输入的x不在定义域内";
	return 0;
}