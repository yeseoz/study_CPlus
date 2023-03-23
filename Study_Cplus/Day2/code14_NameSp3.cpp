#include <iostream>
using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	cout << "So Pretty!!" << endl;
}

void  ProgComImpl::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}

