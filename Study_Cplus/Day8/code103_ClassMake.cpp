#include<iostream>
#pragma warning(disable:4996)
using namespace std;

class Person
{
private:
	char name[30];
	int birthday;
public:
	Person(const char *name, int birthday)
	{
		strcpy(this->name, name);
		this->birthday = birthday;
	}
	void showPerson()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << birthday << endl;
	}
};

int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();

	cout << "===============" << endl;

	Person p2(p1);
	p2.showPerson();

	cout << "=================" << endl;

	Person p3 = p2;
	p3.showPerson();

	return 0;
}