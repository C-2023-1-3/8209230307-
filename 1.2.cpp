#include<iostream>
using namespace std;
int main() {                    //求圆锥体积
	const double PI = 3.14;
	double r, h, V;
	cout << "请输入圆锥底部的半径：";
	cin >> r;
	cout << "请输入圆锥的高：";
	cin >> h;
	V = PI * r * r * h * 1.0 / 3;
	cout << "圆锥的体积为：" << V;
	return 0;
}