#include<iostream>
#include<string>
using namespace std;
//定义学生类
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
//获取最高成绩者的学号  （函数max）
void max(Student* p, int len)
{
	int mark = p->id;       //用于记录最高成绩者的学号
	int maxscore = p->score;          //用于记录最高分
	Student temp(0, " ", 0);   //用于暂存对象

	for (int i = 0; i < 5; p++)
	{
		i++;
		if (maxscore < p->score)
		{
			maxscore = p->score;
			mark = p->id;
		}
	}
	cout << "最高成绩者的学号是：" << mark << endl;
}

int main()
{
	//创建对象数组
	Student stu[5] =
	{
		Student(1,"张三",65),
		Student(6,"李四",23),
		Student(5,"王五",87),
		Student(10,"小明",46),
		Student(9,"小红",99),
	};
	max(stu, 5);
	system("pause");
	return 0;
}