#include<iostream>
using namespace std;

//ռλ����
//����ֵ���� ������(��������){}

//Ŀǰ�׶ε�ռλ�����������ò���������γ��л��õ�
//ռλ���� ��������Ĭ�ϲ��� such as : void func(int a,int=10 ){}
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