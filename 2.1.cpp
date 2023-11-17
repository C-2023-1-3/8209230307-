#include<iostream>
using namespace std;
int main() {                 //输入一个字符，如果为小写，转换为大写输出，否则，输出其后继字符的ASCII码值。
	char a;
	cout << "请输入一个字母：";
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << "其大写字母为：" << static_cast<char>(a - 32);
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "其后继字母的ASCII码为：" << a + 1;
	}
	return 0;
}