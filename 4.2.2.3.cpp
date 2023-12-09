#include<iostream>
using namespace std;
void paixu(int size, int s[])
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				double temp;
				temp = s[j + 1];
				s[j + 1] = s[j];
				s[j] = temp;
			}
		}
	}
}
int main()
{
	int size, a, b, c = 0;
	cout << "Enter the amount of your list:";
	cin >> size;
	b = size;
	int* s = new int[size];
	cout << "Enter your list:";
	while (b)
	{
		b--;
		cin >> a;
		*(s + c) = a;
		c++;
	}
	cout << "输入你想获取的元素下标:";
	cin >> b;
	cout << "s[" << b << "]为:" << *(s + b) << endl;
	paixu(size, s);
	for (int i = 0; i < size; i++)
	{
		cout << *(s + i) << ' ';
	}
	delete[] s;
	return 0;
}