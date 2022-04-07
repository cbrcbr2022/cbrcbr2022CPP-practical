#include<iostream>
using namespace std;

//占位参数
//返回值类型 函数名(数据类型){}

//目前阶段的占位参数，我们用不到，后面课程中会用到
//占位参数 还可以有默认参数 such as : void func(int a,int=10 ){}
void func(int a,int )
{
	cout << "this is a function" << endl;
}

int main()
{

	func(10,10);
	system("pause");

	return 0;
}