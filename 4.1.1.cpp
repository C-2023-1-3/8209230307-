#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int b = 1, num = 1, c = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[(i >= b ? b : i)];
		int c = 0;

		for (int j = 0; j < (i >= b ? b : i); j++)
		{
			if (arr[b] != arr[j])
			{
				c += 1;
			}
		}
		if (c == num)
		{
			b += 1;
			num += 1;
		}
	}
	cout << "The distinct numbers are:";
	for (int k = 0; k < num; k++)
	{
		cout << arr[k] << " ";
	}
	return 0;
}