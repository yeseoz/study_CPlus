#include<iostream>
using namespace std;

int main(int argc, char * argv[])
{
	int i = 0;
	printf("���� ���� ���� : %d\n", argc);
	for (i = 0;i < argc;i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	return 0;
}