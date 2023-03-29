#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Person
{
private:
	char name[30];
	int age;
public:
	Person(const char*, int);
	void getData();
};

class Student : public Person
{
private:
	int studentId;
public:
	Student(const char*, int, int);
	void showData();
};

Person::Person(const char* name, int age)
{
	strcpy(this->name, name);
	this->age = age;
}
void Person::getData()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

Student::Student(const char* name, int age, int studentId):Person(name, age)
{	
	this->studentId = studentId;
}
void Student::showData()
{	
	getData();
	cout << "�й� : " << studentId << endl;
}
int main()
{
	Student st("ȫ�浿", 22, 1);
	st.showData();
	return 0;
}