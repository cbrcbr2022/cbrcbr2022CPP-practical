#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//����������е�ջ��
	return a;
}

int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�Զ��ͷ�
	return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int main()
{
	//int & ref = test01();

	//cout << ("ref=") << ref<<endl;//�ֲ�����a(��ʱ����)������ַ

	int& ref2 = test02(); 
	 cout << ("ref2=") << ref2 << endl;
	 cout << ("ref2=") << ref2 << endl;

	 test02()=1000;//��������ķ���ֵ�����ã�������Ϊ��ֵ
	 cout << ("ref2=") << ref2 << endl;
	 cout << ("ref2=") << ref2 << endl;


	system("pause");
	return 0;
}