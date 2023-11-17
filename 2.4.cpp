#include<iostream>
using namespace std;
int main()
{                //计算机程序
	char a;
	int b, c;
	float sum;
	cout << "请输入一个整数：";
	cin >> b;
	cout << "请输入一个运算符：";
	cin >> a;
	cout << "请输入一个整数：";
	cin >> c;
	switch (a)
	{
	case '+': {
		sum = b + c;
		cout << "结果为：" << sum;
		break;
	}
	case '-': {
		sum = b - c;
		cout << "结果为：" << sum;
		break;
	}
	case '*': {
		sum = b * c;
		cout << "结果为：" << sum;
		break;
	}
	case '/': {
		if (c != 0) {
			sum = static_cast<float>(b) / static_cast<float>(c);
			cout << "结果为：" << sum;
		}
		else cout << "除数不能为0";
		break;
	}
	case '%': {
		if (c != 0) {
			sum = b % c;
			cout << "结果为：" << sum;
		}
		else cout << "除数不能为0";
		break;
	}
	default: {
		cout << "运算符不合法";
	}
	}
	return 0;
}