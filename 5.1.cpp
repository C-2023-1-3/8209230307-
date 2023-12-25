#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	//输入小时
	void sethour(int h)
	{
		hour = h;
	}
	//获取小时
	int gethour()
	{
		return hour;
	}
	//输入分钟
	void setminute(int m)
	{
		minute = m;
	}
	//获取分钟
	int getminute()
	{
		return minute;
	}
	//输入秒
	void setsecond(int s)
	{
		sec = s;
	}
	//获取秒
	int getsecond()
	{
		return sec;
	}

private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;           //定义t1为Time类对象
	int h, m, s;
	cout << "请输入小时：";
	cin >> h;
	cout << endl << "请输入分钟：";
	cin >> m;
	cout << endl << "请输入秒：";
	cin >> s;
	tl.sethour(h);
	tl.setminute(m);
	tl.setsecond(s);
	cout << tl.gethour() << ' ' << tl.getminute() << ' ' << tl.getsecond() << endl;
	//cin >> tl.hour;      //输入设定的时间 
	//cin >> tl.minute;
	//cin >> tl.sec;
	//cout << tl.hour << "；" << tl.minute << "；" << tl.sec << endl;
	return 0;
}
