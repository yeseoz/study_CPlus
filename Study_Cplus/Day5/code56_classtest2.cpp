#include <iostream>
#pragma warning(disable:4996)
using namespace std;
class Human
{
private:
	char* name; // ==> ���� �Ҵ��
	int id;
	int age; // ��ü �����ϸ� ���ÿ� �� �Ҵ��
public:
	Human(const char *aname, int aid, int aage)
	{
		name = new char[strlen(aname) + 1]; // �������� ������ Null �� ������ +1
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() // �Ҹ��� ==> ��ü�� �Ҹ���
	{
		delete [] name; // delete [] ��ġ!
	}

	/*void setData(const char aname[20], int aid, int aage) // �����ڰ� ��������� ���� setData �ʿ� ����
	{
		strcpy_s(name, 20, aname);
		id = aid;
		age = aage;
	}*/
	
	void getData()
	{
		cout << "�̸� : " << name << " " << "�й� : " << id << " " << "���� : " << age << endl;
	}
};
int main()
{
	//Human h; // �����ڸ� ����� ����Ʈ �����ڰ� ��� ���� ���� �ۿ� ����
	//h.setData("ȫ�浿", 1, 30); // �����ڰ� ������ �̷� ���� �ۿ� �ȵ�

	Human h("ȫ�浿", 1, 30);
	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 49), Human("�̱浿", 4, 30) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();
	return 0;
}