#include<iostream>
#include "student(5.2).h"
using namespace std;

//�����ⶨ��display����
void Student::display()
{
	cout << "name:" << name << endl;
	cout << "num:" << num << endl;
	cout << "sex:" << sex << endl;
}

void Student::set_value()
{
	cout << "������������";
	cin >> name;
	cout << endl << "������ѧ�ţ�";
	cin >> num;
	cout << endl << "�������Ա�";
	cin >> sex;
}