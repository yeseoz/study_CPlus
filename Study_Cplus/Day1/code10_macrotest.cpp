# include <iostream>

# define SUM(x,y)	x+y
# define SQLARE(x)  x*x
# define SQLARE1(x)  (x)*(x)
using namespace std;

void func()
{

}

int main()
{
	cout << SUM(10, 20) << endl;
	//func();
	cout << SQLARE(10) << endl;
	cout << SQLARE(10+1) << endl; // ���� �̻�����
	cout << SQLARE1(10 + 1) << endl; 


	return 0;
}