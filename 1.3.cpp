#include<iostream>
using namespace std;
int main() {                //验证数据类型长度
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short int length:" << sizeof(short int) << endl;
	cout << "long int length:" << sizeof(long int) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "long double:" << sizeof(long long) << endl;
	cout << "long long length:" << sizeof(long long) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	return 0;
}