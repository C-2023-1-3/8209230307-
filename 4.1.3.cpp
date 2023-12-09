#include<iostream>
using namespace std;
int main()
{
	bool arr[100];
	int num = 1;
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;
	}
	for (int i = 2; i < 100; i++)
	{
		for (int j = i; j < 100; j += (i + 1))
		{
			arr[j] = !arr[j];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << " ";
		if (((i + 1) / 10) == num)
		{
			num += 1;
			cout << endl;
		}
	}
	return 0;
}