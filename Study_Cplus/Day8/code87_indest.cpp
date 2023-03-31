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
	~CTest() // 슈퍼클래스 소멸자
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int subn,int num) : CTest(num) // 멤버변수는 한개이지만 상속 받고 있는 클래스의 맴버변수도 초기화 해줘야 함
	{
		this->subn = subn;
		cout << num << "CTestSub Constructor" << endl;
	}
	~CTestSub() // 서브클래스 소멸자
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