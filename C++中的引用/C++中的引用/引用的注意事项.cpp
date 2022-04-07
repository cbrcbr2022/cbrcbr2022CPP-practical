#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	//引用必须要初始化
	//int &b;//错误必需初始化
	int& b = a;
	int c = 20;
	//int&b =c;//重定义不可多次初始化
	b = c;//赋值操作而不是更改引用
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}