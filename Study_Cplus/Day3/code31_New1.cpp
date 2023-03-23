// 메모리 동적할당 (c type)
#include<iostream>
using namespace std;

int main()
{
	int* arr;
	char size;

	printf("배열방의 갯수 : ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int)); //heap 영역에 할당

	printf("만들어진 배열의크기 : %d\n", sizeof(int)* size);
	printf("%d\n", sizeof(int));

	free(arr); // 메모리 해제

	return 0;
}
// 오류나는데요?