#include<iostream>
using namespace std;
//定义长方体对象
class Cft
{
public:
	//设置长
	void setlength()
	{
		int l;
		cout << "请输入长：";
		cin >> l;
		length = l;
		cout << endl;
	}
	//设置宽
	void setwidth()
	{
		int w;
		cout << "请输入宽：";
		cin >> w;
		cout << endl;
		width = w;
	}
	//设置高
	void setheight()
	{
		int h;
		cout << "请输入高：";
		cin >> h;
		cout << endl;
		height = h;
	}
	//获取体积
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
	//输入第一、二个长方体的长宽高

	cout << "第一个长方体：" << endl;
	c1.setlength();
	c1.setwidth();
	c1.setheight();

	cout << "第二个长方体：" << endl;
	c2.setlength();
	c2.setwidth();
	c2.setheight();

	//输出体积
	cout << "第一个长方体的体积为：" << c1.getV() << endl;
	cout << "第二个长方体的体积为：" << c2.getV() << endl;

	system("pause");
	return 0;
}