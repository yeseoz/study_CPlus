#include<iostream>
// 연산자 오버로딩
using namespace std;

class Myclass
{
private:
	int num1, num2;
	const char* name;
public:
	Myclass(int cnum1 =0, int cnum2= 1, const char* cname=nullptr) :num1(cnum1), num2(cnum2), name(cname)
	{ }
	void showData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}

};
int main()
{
	Myclass m(1, 2,"hong");
	m.showData();

	Myclass cm(m); // cm = m
	cm.showData();

	Myclass cm1;
	cm1 = cm;
	cm1.showData();
	return 0;
}