#include<iostream>

int main()
{
	int num = 10; // ���� �ʱ�ȭ
	int num1; // ���� ����
	num1 = 20; // ���� ����

	// ���� : ���ϴ� �� <-> ���

	char ch; // ���� Ÿ��
	printf("ch ũ��: %d\n", sizeof(char));

	double d = 3.14;
	printf("doubel ũ��: %d\n", sizeof(double));

	ch = 0x7f; // 16����
			   // 0b 0111 1111  => 8 4 2 1 
			   // 4bit ���� ��� �Ϻ�

	unsigned char ch1 = 0x7f;
	printf("ch: %x \t, ch: %d\n", ch, ch);
	printf("ch1: %x \t, ch1: %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2: %x \t, ch2: %d\n", ch2, ch2);
	printf("ch2: %x \t, ch2: %d\n", uch2, uch2);

	uch2 = uch2 << 1; // ��Ʈ������. uch2�� �������� 1bit��ŭ �̵���Ų��.
	ch2 = ch2 << 1;
	printf("uch2 << 1 : %x\t ch2 << 1: %x\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >>1: %x\n", uch2, ch2);

	return 0;
}