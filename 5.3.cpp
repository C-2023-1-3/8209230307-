#include<iostream>
using namespace std;
//���峤�������
class Cft
{
public:
	//���ó�
	void setlength()
	{
		int l;
		cout << "�����볤��";
		cin >> l;
		length = l;
		cout << endl;
	}
	//���ÿ�
	void setwidth()
	{
		int w;
		cout << "�������";
		cin >> w;
		cout << endl;
		width = w;
	}
	//���ø�
	void setheight()
	{
		int h;
		cout << "������ߣ�";
		cin >> h;
		cout << endl;
		height = h;
	}
	//��ȡ���
	int getV()
	{
		return width * length * height;
	}

private:
	int length;
	int width;
	int height;
};



int main()
{
	Cft c1;
	Cft c2;
	//�����һ������������ĳ����

	cout << "��һ�������壺" << endl;
	c1.setlength();
	c1.setwidth();
	c1.setheight();

	cout << "�ڶ��������壺" << endl;
	c2.setlength();
	c2.setwidth();
	c2.setheight();

	//������
	cout << "��һ������������Ϊ��" << c1.getV() << endl;
	cout << "�ڶ�������������Ϊ��" << c2.getV() << endl;

	system("pause");
	return 0;
}