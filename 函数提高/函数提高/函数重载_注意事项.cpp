#include<iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件
void func(int& a)
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a)
{
	cout << "const func(int &a)调用" << endl;
}

void func2(int a)
{
	cout << "func(int a)调用" << endl;
}
//void func2(int a,int b= 20)
//{
//	cout << "func(int a,int b)调用" << endl;
//}
//减少使用默认参数（赋参数初值）避免函数出现二义性,函数调用不明确
int main()
{
	int a;
	func(a);

	func2(10);

	system("pause");

	return 0;
}