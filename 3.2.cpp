#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int num_index = 0;
	for (int i = num - 1; i > 1; i--)
	{
		if (num % i == 0)
		{
			return false;
		}
		num_index = i;
	}
	if (num_index == 1)
	{
		return true;
	}
}
int main()
{
	int num = 0;
	int round = 1;
	for (int i = 1; i <= 200; i++)
	{
		if (is_prime(i))
		{
			num += 1;
			cout << i << " ";
		}
		if ((num != 0) && (num % 10 == 0) && (num / 10 == round))
		{
			cout << endl;
			round += 1;
		}
	}
}