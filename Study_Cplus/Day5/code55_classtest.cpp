#include <iostream>
using namespace std;
class Human
{
private:
	char name[20];
	int id;
	int age; // ��ü �����ϸ� ���ÿ� �� �Ҵ��
public:
	Human(const char aname[20], int aid, int aage)
	{
		strcpy_s(name, 20, aname);
		id = aid;
		age = aage;
	}
	/*void setData(const char aname[20], int aid, int aage)
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
	return 0;
}