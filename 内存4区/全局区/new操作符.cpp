#include<iostream>
using namespace std;
//1��new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return  p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɹ���Ա���٣�����Ա�����ͷ�
	//�����Ҫ�ͷŶ��������ݣ����ùؼ���delete

	delete p;
	//cout << *p << endl;//�ڴ��Ѿ��ͷŸɾ����ٴη��ʾ��ǷǷ����ᱨ��
}

//2���ڶ�������new��������
void test02()
{
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];//10��ʾ������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��ʮ��Ԫ�ظ�ֵ 100~109
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ�� Ҫ��[]�ſ���

	delete[]arr;
}

int main()
{
	
	//test01();
	test02();
	system("pause");
	return 0;
}