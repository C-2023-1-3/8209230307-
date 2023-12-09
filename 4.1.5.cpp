#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int result = -1;
	int size1 = 0, size2 = 0;
	while (*(s1 + size1))           //获取s1数组内有效字符个数
	{
		size1++;
	}
	while (*(s2 + size2))           //获取s2数组内有效字符个数
	{
		size2++;
	}
	for (int i = 0; i < size2 - size1; i++)
	{
		int num = 0;                //用于记录两个数组连续相同字符的数量
		if (result != -1)
		{
			break;
		}
		for (int j = 0; j < size1; j++)
		{
			if (s2[i + num] == s1[j])
			{
				num++;
			}
			if (result != -1)
			{
				break;
			}
			if (num == size1)
			{
				result = i;
			}
			else
				result = -1;
		}
	}
	cout << "indexOf(" << '"';
	for (int i = 0; i < size1; i++)
	{
		cout << s1[i];
	}
	cout << '"' << ',' << '"';
	for (int i = 0; i < size2; i++)
	{
		cout << s2[i];
	}
	cout << '"' << ")is " << result;
	return 0;
}
int main()
{
	int size = 999;
	char s1[999], s2[999];
	cout << "Enter the first string:";
	cin.getline(s1, size);
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	indexOf(s1, s2);
	return 0;
}