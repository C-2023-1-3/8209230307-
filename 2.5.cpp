#include<iostream>
using namespace std;
int main() {
	//输入一行字符，分别统计出其中英文字母、空格、数字字符和其它字符的个数
	char content;
	int letter = 0, kongge = 0, number = 0, qtzf = 0;
	cout << "请输入一串字符：";
	while ((content = getchar()) && (content != '\n')) {
		if ((content >= 'a' && content <= 'z') || (content >= 'A' && content <= 'Z')) {
			letter += 1;
		}
		else if (content >= '0' && content <= '9') {
			number += 1;
		}
		else if (content == ' ') {
			kongge += 1;
		}
		else qtzf += 1;
	}
	cout << "数字的数量为：" << number << endl;
	cout << "字母的数量为：" << letter << endl;
	cout << "空格的数量为：" << kongge << endl;
	cout << "其他字符的数量为：" << qtzf << endl;
	return 0;
}