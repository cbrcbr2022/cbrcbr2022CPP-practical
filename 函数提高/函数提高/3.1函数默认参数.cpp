#include<iostream>
using namespace std;

//����Ĭ�ϲ���

//�൱�ڸ�������������ֵ
//�﷨������ֵ���� ������(�β� = Ĭ��ֵ){}

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ

//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//����������ʵ����ֻ����һ��Ĭ�ϲ�����
int func2(int a , int b);

int func2(int a=20, int b=20)
{
	return a + b;
}

int main()
{
	cout << func(10,30) << endl;

	cout << func2() << endl;

	system("pause");

	return 0;
}