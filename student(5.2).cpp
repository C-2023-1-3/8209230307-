#include<iostream>
#include "student(5.2).h"
using namespace std;

//在类外定义display函数
void Student::display()
{
	cout << "name:" << name << endl;
	cout << "num:" << num << endl;
	cout << "sex:" << sex << endl;
}

void Student::set_value()
{
	cout << "请输入姓名：";
	cin >> name;
	cout << endl << "请输入学号：";
	cin >> num;
	cout << endl << "请输入性别：";
	cin >> sex;
}