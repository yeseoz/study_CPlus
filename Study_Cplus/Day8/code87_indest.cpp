#include<iostream>
using namespace std;
class CTest
{
private:
	int num;
public:
	CTest(int num)
	{
		this->num = num;
		cout << num << endl << "CTest Constructor" << endl;
	}
	~CTest() // ����Ŭ���� �Ҹ���
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int subn,int num) : CTest(num) // ��������� �Ѱ������� ��� �ް� �ִ� Ŭ������ �ɹ������� �ʱ�ȭ ����� ��
	{
		this->subn = subn;
		cout << num << "CTestSub Constructor" << endl;
	}
	~CTestSub() // ����Ŭ���� �Ҹ���
	{
		cout << "CTestSub Constructor" << endl;
	}
};
int main()
{
	CTest c1(10);
	cout << "==================" << endl;
	CTestSub c2(10, 1);

	return 0;
}