#include<iostream>
using namespace std;

class C1
{
	int m_A;//默认权限 是私有
};

struct C2
{
	int m_A;//默认权限 是公共
};


int main()
{
	//struct 和 class的区别
	//struct 默认权限 公共  public
	//class  默认权限 私有  private
	C1 c1;
	//c1.m_A=100; //class默认权限 是私有

	C2 c2;
	c2.m_A = 100; //struct默认权限 是公共
	system("pause");

	return 0;

}