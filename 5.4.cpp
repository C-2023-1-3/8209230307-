#include<iostream>
#include<string>
using namespace std;
//����ѧ����
class Student
{
public:
	Student(int iid, string nname, int sscore)
	{
		id = iid;
		name = nname;
		score = sscore;
	}
	int id;
	string name;
	int score;
};
//��ȡ��߳ɼ��ߵ�ѧ��  ������max��
void max(Student* p, int len)
{
	int mark = p->id;       //���ڼ�¼��߳ɼ��ߵ�ѧ��
	int maxscore = p->score;          //���ڼ�¼��߷�
	Student temp(0, " ", 0);   //�����ݴ����

	for (int i = 0; i < 5; p++)
	{
		i++;
		if (maxscore < p->score)
		{
			maxscore = p->score;
			mark = p->id;
		}
	}
	cout << "��߳ɼ��ߵ�ѧ���ǣ�" << mark << endl;
}

int main()
{
	//������������
	Student stu[5] =
	{
		Student(1,"����",65),
		Student(6,"����",23),
		Student(5,"����",87),
		Student(10,"С��",46),
		Student(9,"С��",99),
	};
	max(stu, 5);
	system("pause");
	return 0;
}