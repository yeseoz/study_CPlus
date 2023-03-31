#include<iostream>
using namespace std;
class CTest
{
private:
	int num;
public:
	CTest(int cnum):num(cnum)
	{
		cout << num << " CTest ����" << endl;
	}
	virtual ~CTest()
	{
		cout << "CTest �Ҹ�" << endl;
	}
	void func()
	{
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() // �����Լ�
	{
		cout << "CTest vfunc()" << endl;
	}
};

class CTestSub :public CTest
{
private:
	int subn;
public:
	CTestSub(int snum, int num) : subn(snum), CTest(num)
	{
		cout << subn << " CTestSub ����" << endl;
	}
	~CTestSub()
	{
		cout << "CTestSub �Ҹ�" << endl;
	}
	void vfunc() //�������̵�
	{
		cout << "CTestSub fundc()" << endl;
	}
};
int main()
{
	//CTest c1(10);
	//cout << "==================" << endl;
	//CTestSub cs1(10, 1);
	//cout << "====================" << endl;
	CTest* ps = new CTestSub(33, 3); // �޸� �����Ҵ��� �޾Ƽ� �Ҹ��� ����ȵ� ==> Delete �������
	delete ps; // �����Լ� ���� ���� �Ҹ��� ���� �ȵ� (�ڽ�Ŭ���� ������ ������) ==> ���� �Ҹ��� ����� ����� (���� Ŭ������ �Ҹ��� �������� �ٲ��ִ� ��)

	return 0;
}