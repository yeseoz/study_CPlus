# include<iostream>

int main()
{
	char ch[5] = "hong";
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a'; // 얘는 문자열이 아니기 때문에 null 값 안들어가도됨

	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", ch[i]);
	}

	printf("char 크기: %d\n", sizeof(char));
	printf("ch[4] : %c\n", ch[4]);
	printf("ch[4] : %s\n", ch[4]);
	return 0;
}