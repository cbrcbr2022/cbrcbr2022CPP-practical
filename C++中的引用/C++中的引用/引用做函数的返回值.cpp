#include<iostream>
using namespace std;

//引用做函数的返回值
//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;//存放在四区中的栈区
	return a;
}

int& test02()
{
	static int a = 10;//静态变量，存放在全局区。全局区上的数据在程序结束后系统自动释放
	return a;
}

//2、函数的调用可以做为左值
int main()
{
	//int & ref = test01();

	//cout << ("ref=") << ref<<endl;//局部变量a(临时变量)垃圾地址

	int& ref2 = test02(); 
	 cout << ("ref2=") << ref2 << endl;
	 cout << ("ref2=") << ref2 << endl;

	 test02()=1000;//如果函数的返回值是引用，可以作为左值
	 cout << ("ref2=") << ref2 << endl;
	 cout << ("ref2=") << ref2 << endl;


	system("pause");
	return 0;
}