#include <iostream>
using namespace std;

namespace BestComImpl
{
	void  SimpleFunc(void)
	{
		cout << "BestCom�� ������ �Լ�" << endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		cout << "ProgCom�� ������ �Լ�" << endl;
	}
}
int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}