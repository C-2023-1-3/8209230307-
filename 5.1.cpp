#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	//����Сʱ
	void sethour(int h)
	{
		hour = h;
	}
	//��ȡСʱ
	int gethour()
	{
		return hour;
	}
	//�������
	void setminute(int m)
	{
		minute = m;
	}
	//��ȡ����
	int getminute()
	{
		return minute;
	}
	//������
	void setsecond(int s)
	{
		sec = s;
	}
	//��ȡ��
	int getsecond()
	{
		return sec;
	}

private:             // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;           //����t1ΪTime�����
	int h, m, s;
	cout << "������Сʱ��";
	cin >> h;
	cout << endl << "��������ӣ�";
	cin >> m;
	cout << endl << "�������룺";
	cin >> s;
	tl.sethour(h);
	tl.setminute(m);
	tl.setsecond(s);
	cout << tl.gethour() << ' ' << tl.getminute() << ' ' << tl.getsecond() << endl;
	//cin >> tl.hour;      //�����趨��ʱ�� 
	//cin >> tl.minute;
	//cin >> tl.sec;
	//cout << tl.hour << "��" << tl.minute << "��" << tl.sec << endl;
	return 0;
}
