#include<iostream>

int main()
{
	int num = 10; // 변수 초기화
	int num1; // 변수 선언
	num1 = 20; // 변수 대입

	// 변수 : 변하는 값 <-> 상수

	char ch; // 문자 타입
	printf("ch 크기: %d\n", sizeof(char));

	double d = 3.14;
	printf("doubel 크기: %d\n", sizeof(double));

	ch = 0x7f; // 16진수
			   // 0b 0111 1111  => 8 4 2 1 
			   // 4bit 묶어 논것 니블

	unsigned char ch1 = 0x7f;
	printf("ch: %x \t, ch: %d\n", ch, ch);
	printf("ch1: %x \t, ch1: %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2: %x \t, ch2: %d\n", ch2, ch2);
	printf("ch2: %x \t, ch2: %d\n", uch2, uch2);

	uch2 = uch2 << 1; // 비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 << 1 : %x\t ch2 << 1: %x\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >>1: %x\n", uch2, ch2);

	return 0;
}