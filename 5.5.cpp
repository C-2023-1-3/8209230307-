#include<iostream>
using namespace std;
//����Point��
class Point
{
public:
	Point(int xx = 60, int yy = 80)       //���캯����ʼ������
	{
		x = xx;
		y = yy;
	}
	void setPoint(int i, int j)           //�޸���������ֵ
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "����Ϊ(" << x << "," << y << ")" << endl;
	}

private:
	int x;     //������
	int y;     //������
};

int main()
{
	Point a;
	//��֤��ʼ��
	a.display();

	//��֤setPoint
	a.setPoint(10, 8);
	a.display();

	system("pause");
	return 0;
}