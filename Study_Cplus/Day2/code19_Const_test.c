#include <stdio.h>

int main()
{
	/*int num = 10;
	printf("num : %d\n", num);
	
	num = 20;
	printf("num : %d\n", num);*/

	//const int num = 20;
	//printf("num = %d\n", num);

	//num = 20;
	/*int* p = &num;
	printf("p�� ����� ��: %p\n", p);
	printf("p�� �����ϴ� �� : %d\n", *p);
	*p = 100;
	printf("p�� ����Ű�� ���� ������ �� : %d\n", *p);
	printf("num : %d\n", num);*/

	const int num = 10;
	printf("num : %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num : %d\n", num);

	const int* pa = &num;
	

	return 0;
}