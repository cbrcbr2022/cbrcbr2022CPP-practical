#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	//���ñ���Ҫ��ʼ��
	//int &b;//��������ʼ��
	int& b = a;
	int c = 20;
	//int&b =c;//�ض��岻�ɶ�γ�ʼ��
	b = c;//��ֵ���������Ǹ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}