#include<iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	try 
	{
		if (b == 0) throw b; // 예외가 발생되면 b를 던진다
		c = a / b;
		cout << "몫 : " << c << endl;
		d = a % b;
		cout << "나머지 : " << d << endl << endl;;
	}
	catch (int ex)
	{
		cout <<"<" << ex << "으로 나눌 수 없습니다.>" << endl << endl;
	}
}

int main()
{
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
		divide(100, 20);


	cout << "예외가 발생을 해도 정상종료!" << endl;

}
