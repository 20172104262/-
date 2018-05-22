// 英尺的转换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class Britishlength
{
public:
	double feet;
	double inch;
	int feet2;
	int inch2;
	int mater;
	int feet3;
	double inch3;
	double a;
	int b;
	void danisi()
	{
		cout << "请输入米.英尺和英寸" << endl;
	}
	void import()
	{
		cin >> mater;
		cin >> feet2 >> inch2;
	}
	void transtion()
	{
		a = mater * 3.2808399;
		feet = (int)a;
		inch = (a - feet) * 12;
	}
	void arithmetic()
	{
		inch3 = inch + inch2;
		if (inch3 >= 12)
		{
			b = inch3 / 12;
			inch3 = inch3 - b * 12;
		}
		feet3 = feet2 + b + feet;
	}
	void display()
	{
		cout << feet3 << "feet" << inch3 << "inch" << endl;
	}
};

int main()
{
	Britishlength oc;
	oc.danisi();
	oc.import();
	oc.transtion();
	oc.arithmetic();
	oc.display();
	return 0;
}


