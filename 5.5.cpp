#include<iostream>
using namespace std;
//定义Point类
class Point
{
public:
	Point(int xx = 60, int yy = 80)       //构造函数初始化数据
	{
		x = xx;
		y = yy;
	}
	void setPoint(int i, int j)           //修改类内坐标值
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "坐标为(" << x << "," << y << ")" << endl;
	}

private:
	int x;     //横坐标
	int y;     //纵坐标
};

int main()
{
	Point a;
	//验证初始化
	a.display();

	//验证setPoint
	a.setPoint(10, 8);
	a.display();

	system("pause");
	return 0;
}