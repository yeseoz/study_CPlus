#include <iostream>
#pragma warning(disable:4996)

// Ŭ���� ��������� ������ �� �ִ� �����  3������ ǥ���ȴ�
class Myclass {
	//������� : �Ӽ�
private:
	char id;
	int age;
	char name[10];
	//��� �Լ� (=�޼ҵ�): ���
public:
	void set(char aid, int aage, const char *aname);
	void get();
};

void Myclass::get()
{
	printf("id : %d\n���� : %d\n�̸� : %s", id, age, name);
}

void Myclass::set(char aid, int aage, const char *aname)
{
	id = aid;
	age = aage;
	strcpy(name, aname);
}

int main()
{
	Myclass per;
	per.set(1, 20, "ȫ�浿"); // �̸��� �ٲ�� �ȵǴϱ� ���ȭ ������� => const
	per.get();
	return 0;

}