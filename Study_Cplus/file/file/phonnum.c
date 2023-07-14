/* FILE */
#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

#define	CAPACITY	100
#define	BUF_SIZE	20

char* names[CAPACITY];		// 이름이 저장된 변수의 주소를 저장할 배열
char* numbers[CAPACITY];	// 번호가 저장된 변수의 주소를 저장할 배열
int n = 0;

void add();
void find();
void show();
void delete();
void fileRoad();
void fileSave();

int main()
{
	char command[BUF_SIZE];
	printf("============ Phone Book 관리 Program ============\n");
	fileRoad();

	while (1) {
		printf("\n\n add\tfind\tshow\tdel\tsave\texit\n");
		printf(" $ > ");
		scanf_s(" %s", command, sizeof(command));

		if (!strcmp(command, "add")) add();
		else if (!strcmp(command, "find")) find();
		else if (!strcmp(command, "show")) show();
		else if (!strcmp(command, "save")) fileSave();
		else if (!strcmp(command, "del")) { delete(); printf("delete sucess"); }
		else if (!strcmp(command, "exit")) break;
	}
	printf(" Good Bye ~~~\n");
	Sleep(1000);
	return 0;
}
void add()
{
	char temp[BUF_SIZE];
	printf(" name: ");
	scanf_s("%s", temp, sizeof(temp));
	names[n] = _strdup(temp);		// temp가 복사된 문자열의 위치 포인터 반환
	printf(" number: ");
	scanf_s("%s", temp, sizeof(temp));
	numbers[n] = _strdup(temp);
	n++;
}
void find()
{
	char temp[BUF_SIZE];
	printf(" serch: ");
	scanf_s("%s", temp, sizeof(temp));
	for (int i = 0; i < n; i++) {
		if (!strcmp(temp, names[i]) || !strcmp(temp, numbers[i])) {
			printf("%s\t%s", names[i], numbers[i]);
			break;
		}
	}
}
void show()
{
	for (int i = 0; i < n; i++) {
		printf(" %s - %s\n", names[i], numbers[i]);
	}
}
void delete()
{
	int i;
	char delName[BUF_SIZE];
	printf(" delete name: ");
	scanf("%s", delName);
	for (i = 0; i < n; i++) {
		if (!strcmp(delName, names[i])) {
			free(names[i]);
			free(numbers[i]);
			break;
		}
	}
	n--;
	for (int j = i; j < n; j++) {
		names[j] = names[j + 1];
		numbers[j] = numbers[j + 1];
	}
	return;
}
void fileRoad()
{
	char _name[BUF_SIZE];
	char _number[BUF_SIZE];
	FILE* fp = fopen("list.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, " No saved number!!");
		return;
	}
	while (fscanf(fp, "%s %s", _name, _number) != EOF) {
		names[n] = _strdup(_name);
		numbers[n] = _strdup(_number);
		n++;
	}
}
void fileSave()
{
	FILE* fp = fopen("list.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "file open error!!");
		return;
	}
	for (int i = 0; i < n; i++) {
		fprintf(fp, "%s %s\n", names[i], numbers[i]);
	}

	fprintf(stdout, " save sucess");
	fclose(fp);
}