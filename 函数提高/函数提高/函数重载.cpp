#include<iostream>
using namespace std;

//函数重载
//可以让函数名相同，提高复用率

//函数重载的满足条件
//1、同一个作用域下
//2、函数名称相同
//3、函数参数不同，或个数不同，或顺序不同
void func()
{
	cout << "func的函数调用！" << endl;
}

void func(int a)
{
	cout << "func（int a)的函数调用！" << endl;
}

//void func(int b)
//{
//	cout << "func（int b)的函数调用！" << endl;
//}
void func(double a)
{
	cout << "func（double a)的函数调用！" << endl;
}

void func(double a, int b)
{
	cout << "func（double a,int b)的函数调用！" << endl;
}

void func(int b,double a)
{
	cout << "func（int b,double a)的函数调用！" << endl;
}

//注意事项
//函数的返回值不可以作为函数重载的条件

//int func(int b, double a)
//{
//	cout << "func（int b,double a)的函数调用！" << endl;
//}

int main()
{
	func(3);
	system("pause");

	return 0;
}