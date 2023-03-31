#include<iostream>
#pragma warning(disable:4996)
using namespace std;

class Person
{
private:
    char* name;
    int birthday;
public:
    /*Person(const char* name, int birthday)
    {
       strcpy(this->name, name);
       this->birthday = birthday;
    }*/
    Person(const char* name, int birthday)
    {
        int len = strlen(name) + 1;
        this->name = new char[len];
        strcpy(this->name, name);
        this->birthday = birthday;
    }
    Person(const Person& copy) :name(copy.name), birthday(copy.birthday) // ���� ������
    {
        int len = strlen(copy.name) + 1;
        this->name = new char[len];
        strcpy(this->name, copy.name);
    }

    Person& operator= (const Person& p) // ���� ���Կ�����
    {   
        delete[] name;
        int len = strlen(p.name) + 1;
        this->name = new char[len];
        strcpy(this->name, p.name);
        this->birthday = p.birthday;
        return *this;
    }

    void showPerson() const
    {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << birthday << endl << endl;
    }
    ~Person()
    {
        delete[] name;
    }
};

int main()
{
    /*Person* p1 = new Person("ȫ�浿",19970101);
    p1->showPerson();

    Person* p2 = p1;
    p2->showPerson();*/

    Person p1("ȫ�浿", 19900216);
    Person p2 = p1;
    Person p3(p2);
    Person p4("������", 20001201);

    p1.showPerson();
    p2.showPerson();
    p3.showPerson();
    p4 = p1; // p4�� p1�� ���� �����ϱ� ������ �Ҹ��ڿ��� ��������!
    p4.showPerson();
    //delete p1;
    //delete p2; // ���� �߻�...!
    return 0;
}