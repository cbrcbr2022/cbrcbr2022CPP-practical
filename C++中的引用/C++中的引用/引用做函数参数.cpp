#include<iostream>
using namespace std;

//��������

//1��ֵ����
void mySwap01(int a, int b)  
{
	int temp=a;
	a = b;
	b = temp;
	cout << "swap01a=" << a << endl;
	cout << "swp01b=" << b << endl;
}

//2����ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	//mySwap01(a, b);//ֵ�����ββ�������ʵ��
	//cout << "a=" <<a<< endl;
	//cout << "b=" << b << endl;
	//mySwap02(&a, &b);//��ַ���ݣ��βλ�����ʵ�ε�

	mySwap03(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause"); 
	
}