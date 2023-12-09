#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	int size = 0;
	while (*(s + size))            //获取字符串长度
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((s[i] == (65 + j)) || (s[i] == (97 + j)))
			{
				counts[j] = counts[j] + 1;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(97 + i) << ":" << counts[i] << " times" << endl;
		}
	}
}
int main()
{
	int counts[26] = { 0 };
	char s[999];
	cout << "Enter a string: ";
	cin.getline(s, 999);
	count(s, counts);
	return 0;
}