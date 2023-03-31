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
    Person(const Person& copy) :name(copy.name), birthday(copy.birthday) // 복사 생성자
    {
        int len = strlen(copy.name) + 1;
        this->name = new char[len];
        strcpy(this->name, copy.name);
    }

    Person& operator= (const Person& p) // 복사 대입연산자
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
        cout << "이름 : " << name << endl;
        cout << "생일 : " << birthday << endl << endl;
    }
    ~Person()
    {
        delete[] name;
    }
};

int main()
{
    /*Person* p1 = new Person("홍길동",19970101);
    p1->showPerson();

    Person* p2 = p1;
    p2->showPerson();*/

    Person p1("홍길동", 19900216);
    Person p2 = p1;
    Person p3(p2);
    Person p4("강감찬", 20001201);

    p1.showPerson();
    p2.showPerson();
    p3.showPerson();
    p4 = p1; // p4가 p1을 얕은 복사하기 때문에 소멸자에서 오류생성!
    p4.showPerson();
    //delete p1;
    //delete p2; // 에러 발생...!
    return 0;
}