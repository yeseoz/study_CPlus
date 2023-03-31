#include<iostream>
using namespace std;

class Myclass
{
private:
	int value;
public:
	Myclass(int avalue):value(avalue)
	{ }
	Myclass operator+(const Myclass &other) const // 매개변수에 객체를 넣고 싶을 때 참조타입이 와야함 // 출력도 객체형태 (Myclass)
	{
		return Myclass(value + other.value);
	}
	void print()
	{
		cout << value << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	 Myclass d = a + b + c; // 에러 객체의 더하기는 지원 안함.
	 d.print();
	 //객체를 더하는 기능은 없다 => 더하기 기능에 객체를 더하는 기능을 넣어준다 => 연산자 오버로딩

	return 0;
}