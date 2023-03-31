#include<iostream>
using namespace std;

template<typename T>  //클래스 템플릿 일반화ㅏ
class CTest {
private:
	T data;
public:
	CTest(T adata):data(adata)
	{ }
	T getData()
	{
		return data;
	}
};

template<> //클래스 템플릿 특수화 
class CTest<char>
{
private:
	char data;
public:
	CTest(const char adata):data(adata)
	{ }
	char getData()
	{
		return data;
	}

};

int main()
{
	CTest<int> p1(10);
	cout << p1.getData() << endl;
	CTest<char> p2('A');
	cout << p2.getData() << endl;

	return 0;
}
