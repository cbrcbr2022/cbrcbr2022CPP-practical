#include<iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����
void func(int& a)
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a)
{
	cout << "const func(int &a)����" << endl;
}

void func2(int a)
{
	cout << "func(int a)����" << endl;
}
//void func2(int a,int b= 20)
//{
//	cout << "func(int a,int b)����" << endl;
//}
//����ʹ��Ĭ�ϲ�������������ֵ�����⺯�����ֶ�����,�������ò���ȷ
int main()
{
	int a;
	func(a);

	func2(10);

	system("pause");

	return 0;
}