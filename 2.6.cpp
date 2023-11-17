#include<iostream>
using namespace std;
int max(int a, int b, int c) {
	c = a > b ? a : b;
	return(c);
}
int main() {
	int a, b, c, gongbei;
	int gongyue = 0;
	cout << "请输入两个整数：";
	cin >> a >> b;
	c = max(a, b);
	for (int i = c; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			gongyue = i;
		}
		if (gongyue != 0) {
			break;
		}
	}
	gongbei = a * b / gongyue;
	cout << "最大公约数为：" << gongyue << endl;
	cout << "最小公倍数为：" << gongbei;
	return 0;
}