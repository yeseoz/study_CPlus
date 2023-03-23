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
	printf("p에 저장된 값: %p\n", p);
	printf("p가 참조하는 값 : %d\n", *p);
	*p = 100;
	printf("p가 가리키는 곳의 데이터 값 : %d\n", *p);
	printf("num : %d\n", num);*/

	const int num = 10;
	printf("num : %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num : %d\n", num);

	const int* pa = &num;
	

	return 0;
}