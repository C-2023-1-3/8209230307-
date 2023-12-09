#include<iostream>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString)   //讲字符串表示的16进制数转化为10进制
{
	int sum = 0, len = 0, j = -1, a = 0, b;
	while (*(hexString + len))              //获取字符串有效长度
	{
		len++;
	}
	for (int i = (len - 1); *(hexString + i) != 0; i--)
	{
		j++;
		if (j > len - 1)
		{
			break;
		}
		switch (*(hexString + i))
		{
		case 'A':
			sum += 10 * (pow(16, j));
			break;
		case 'B':
			sum += 11 * (pow(16, j));
			break;
		case 'C':
			sum += 12 * (pow(16, j));
			break;
		case 'D':
			sum += 13 * (pow(16, j));
			break;
		case 'E':
			sum += 14 * (pow(16, j));
			break;
		case 'F':
			sum += 15 * (pow(16, j));
			break;
		default:
			a = static_cast<int>(*(hexString + i));
			if (j == 0)
			{
				sum += (a - 48);
			}
			else sum += (a - 48) * (pow(16, j));
			break;
		}
	}
	return sum;
}
int main()
{
	char hex[999];
	int a;
	cout << "Enter your char:";
	cin.getline(hex, 999);
	a = parseHex(hex);
	cout << a;
	return 0;
}