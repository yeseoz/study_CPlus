#include<iostream>
using namespace std;

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int main()
	{
	int res;
	int (*fp)(int, int); // �Լ� ������ ����
	fp = add;
	res = fp(10, 20);
	printf("%d\n", res);

	fp = sub;
	res = fp(10, 10);
	printf("%d", res);

		return 0;
	}
