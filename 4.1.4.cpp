#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int k = size1; k < size1 + size2; k++)
	{
		list3[k] = list2[k - size1];
	}
	for (int i = 0; i < (size1 + size2) - 1; i++)
	{
		for (int j = 0; j < (size1 + size2) - 1 - i; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp;
				temp = list3[j + 1];
				list3[j + 1] = list3[j];
				list3[j] = temp;
			}
		}
	}
	for (int i = 0; i < (size1 + size2); i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int list1[80] = {};
	int list2[80] = {};
	int list3[80] = {};
	int size1, size2;
	cout << "Enter listi:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << "The merge list is:";
	merge(list1, size1, list2, size2, list3);
}