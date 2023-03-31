#include<iostream>
using namespace std;
class CTest
{
private:
	int num;
public:
	CTest(int cnum):num(cnum)
	{
		cout << num << " CTest 생성" << endl;
	}
	virtual ~CTest()
	{
		cout << "CTest 소멸" << endl;
	}
	void func()
	{
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() // 가상함수
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
		cout << subn << " CTestSub 생성" << endl;
	}
	~CTestSub()
	{
		cout << "CTestSub 소멸" << endl;
	}
	void vfunc() //오버라이딩
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
	CTest* ps = new CTestSub(33, 3); // 메모리 동적할당을 받아서 소멸자 실행안됨 ==> Delete 해줘야함
	delete ps; // 가상함수 쓰면 서브 소멸자 실행 안됨 (자식클래스 가려져 버려서) ==> 가상 소멸자 사용해 줘야함 (기초 클래스의 소멸자 가상으로 바꿔주는 것)

	return 0;
}