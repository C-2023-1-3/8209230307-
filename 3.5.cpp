#include<iostream>
using namespace std;
int main()
{
	int m = 1;
	for (int i = 1; i < 10; i++)
		m = (m + 1) * 2;
	cout << "第一天猴子摘了" << m << " 个桃子" << endl;

	return 0;
}