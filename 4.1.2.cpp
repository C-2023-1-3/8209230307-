#include<iostream>
using namespace std;
int main()
{
	double arr[10];
	const int N = 10;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp;
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << ' ';
	}
	return 0;
}