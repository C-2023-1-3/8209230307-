#include<iostream>;
using namespace std;
int gongyue(int a, int b)        //求最小公约数的函数
{
	int num = 0;
	for (int i = a; i > 0; i--)
	{
		if ((a % i == 0) && (b % i == 0) && (i != 1))
		{
			num = i;
		}
		if ((i == 1) && (num == 0))
		{
			num = i;
		}
	}

	return(num);
}

int main() {
	int m, n, gy, gb;
	cout << "请输入两个正整数：";
	cin >> m >> n;
	gy = gongyue(m, n);
	gb = m * n / gy;
	cout << "两数最小公约数为：" << gy << endl;
	cout << "两数最小公倍数为：" << gb << endl;
	return 0;
}