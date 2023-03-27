# include<iostream>
using namespace std;

class Myclass {
	int num;
public:
	Myclass(int n) :num(n)
	{
		cout << "생성자 호출" << endl;
	}
	Myclass(Myclass& other)
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;
	}
	void getData()
	{
		cout << num << endl;
	}

};

int main()
{
	Myclass m1(10);
	Myclass m2 = m1; // 복사생성자 호출 int num2 = num1;
	Myclass m3(m2); // 복사 생성자 호출 

	// 복사 생성자의 매개변수는 참조형이 와야한다
	// 객체 타입이 오면 무한루프에 빠지게 됨

	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}