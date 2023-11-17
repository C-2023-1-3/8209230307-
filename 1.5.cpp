#include<iostream>
#include<iomanip>
using namespace std;
int main() {                //华氏度转摄氏度
	float h, s;
	cout << "请输入华氏度：";
	cin >> h;
	s = (h - 32) / 1.8;
	cout << fixed;
	cout << "相应的摄氏度为：" << setprecision(2) << s;
	return 0;
}