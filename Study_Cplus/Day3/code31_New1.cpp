// �޸� �����Ҵ� (c type)
#include<iostream>
using namespace std;

int main()
{
	int* arr;
	char size;

	printf("�迭���� ���� : ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int)); //heap ������ �Ҵ�

	printf("������� �迭��ũ�� : %d\n", sizeof(int)* size);
	printf("%d\n", sizeof(int));

	free(arr); // �޸� ����

	return 0;
}
// �������µ���?