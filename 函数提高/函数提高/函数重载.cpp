#include<iostream>
using namespace std;

//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1��ͬһ����������
//2������������ͬ
//3������������ͬ���������ͬ����˳��ͬ
void func()
{
	cout << "func�ĺ������ã�" << endl;
}

void func(int a)
{
	cout << "func��int a)�ĺ������ã�" << endl;
}

//void func(int b)
//{
//	cout << "func��int b)�ĺ������ã�" << endl;
//}
void func(double a)
{
	cout << "func��double a)�ĺ������ã�" << endl;
}

void func(double a, int b)
{
	cout << "func��double a,int b)�ĺ������ã�" << endl;
}

void func(int b,double a)
{
	cout << "func��int b,double a)�ĺ������ã�" << endl;
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����

//int func(int b, double a)
//{
//	cout << "func��int b,double a)�ĺ������ã�" << endl;
//}

int main()
{
	func(3);
	system("pause");

	return 0;
}