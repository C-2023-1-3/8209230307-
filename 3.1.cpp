#include<iostream>;
using namespace std;
int gongyue(int a, int b)        //����С��Լ���ĺ���
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
	cout << "������������������";
	cin >> m >> n;
	gy = gongyue(m, n);
	gb = m * n / gy;
	cout << "������С��Լ��Ϊ��" << gy << endl;
	cout << "������С������Ϊ��" << gb << endl;
	return 0;
}