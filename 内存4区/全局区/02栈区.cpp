	#include<iostream>
using namespace std;

//ջ������ע������
//ջ���������ɱ����������ٺ��ͷ�

int* func(int b)//�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������ͷ�
	return &a;//���ؾֲ������ĵ�ַ
}

int main()
{
	//����func�����ķ���ֵ
	int* p = func(1);

	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ���֣���Ϊ���������˱���
	cout << *p << endl;


	system("pause");
	return 0;
}