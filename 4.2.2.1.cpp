#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int result = -1;
	for (int i = 0; *(s2 + i) != 0; i++)
	{
		int num = 0;
		if (result != -1)
		{
			break;
		}
		for (int j = 0; *(s1 + j) != 0; j++)
		{
			if (*(s2 + i + num) == *(s1 + j))
			{
				num += 1;
			}
			if (*(s1 + num) == 0)
			{
				result = i;
				break;
			}
		}
	}
	return result;
}
int main()
{
	char s1[999];
	char s2[999];
	int a;
	cout << "Enter s1:";
	cin.getline(s1, 999);
	cout << "Enter s2:";
	cin.getline(s2, 999);
	a = indexof(s1, s2);
	if (a != -1)
	{
		cout << "第一次匹配的下标为：" << a;
	}
	else
		cout << a;
	return 0;
}