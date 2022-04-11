#include<iostream>
using namespace std;

//�����������
//1��������������
//2���������
//3�������Ϊ ��ȡ��������������
//4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}

	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}

	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}

	//��ȡ��
	int getH()
	{
		return m_H;
	}

	int getV()
	{
		return m_L * m_W * m_H;
	}

	int getS()
	{
		return 2 * (m_L*m_W + m_W*m_H + m_H*m_L);
	}

	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube& c)
	{
		if (m_H== c.getH() && m_W == c.getW() && m_L == c.getL())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int m_L;
	int m_W;
	int m_H;
	
};

bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1   .getL() == c2.getL())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Cube c1;
	c1.setH(10);
	c1.setW(10);
	c1.setL(10);
	cout << "c1�����Ϊ:" << c1.getS() << endl;
	cout << "c1�����Ϊ:" << c1.getV() << endl;
	Cube c2;
	c2.setH(10);
	c2.setW(10);
	c2.setL(11);
	cout << "c2�����Ϊ:" << c2.getS() << endl;
	cout << "c2�����Ϊ:" << c2.getV() << endl;
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2���" << endl;	
	}
	else
	{
		cout << "c1��c2����" << endl;
	}

	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2���" << endl;

	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�����" << endl;
	}
	system("pause");
	return 0;
}