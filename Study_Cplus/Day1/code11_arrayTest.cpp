# include<iostream>

int main()
{
	char ch[5] = "hong";
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a'; // ��� ���ڿ��� �ƴϱ� ������ null �� �ȵ�����

	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", ch[i]);
	}

	printf("char ũ��: %d\n", sizeof(char));
	printf("ch[4] : %c\n", ch[4]);
	printf("ch[4] : %s\n", ch[4]);
	return 0;
}