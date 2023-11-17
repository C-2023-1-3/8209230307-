#include<iostream>
using namespace std;
int main() {                  //输入三角形的三条边，求周长，并判断该三角形是否为等腰三角形
	int a, b, c, C;
	cout << "请输入三角形的三边边长：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		C = a + b + c;
		cout << "该三角形的周长为：" << C;
		if (a == b || a == c || b == c) {
			cout << "且该三角形为等腰三角形";
		}
	}
	else cout << "您输入的三条边无法组成三角形";
	return 0;
}