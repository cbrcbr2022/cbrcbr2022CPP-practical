#include<iostream>
using namespace std;

//����Ȩ��
//����
//����Ȩ�� public  ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� public  ��Ա ���ڿ��Է��� ���ⲻ���Է���
//˽��Ȩ�� public  ��Ա ���ڿ��Է��� ���ⲻ���Է���

class Person
{
public:
	//����Ȩ��
	string m_Name;//����

protected:
	//����Ȩ��
	string m_Car;//����

private:
	//˽��Ȩ��
	int m_Password;//���п�����

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123123;
	}

};

int main()
{
	//ʵ�����������
	Person p1;

	p1.m_Name = "����";
	//p1.m_Car = "����"; //����Ȩ�� ���ⲻ���Է���
	//p1.m_Password = "123";//˽��Ȩ�� ���ⲻ���Է���

	p1.func();
	system("pause");
	return 0;
}