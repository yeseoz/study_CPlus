#include <iostream>
using namespace std;
class Human
{
private:
	char name[20];
	int id;
	int age; // 객체 생성하면 스택에 다 할당됨
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
		cout << "이름 : " << name << " " << "학번 : " << id << " " << "나이 : " << age << endl;
	}
};
int main()
{
	//Human h; // 생성자를 만들면 디폴트 생성자가 없어서 오류 날수 밖에 없음
	//h.setData("홍길동", 1, 30); // 생성자가 없으면 이런 형태 밖에 안됨
	
	Human h("홍길동", 1, 30);
	h.getData();
	return 0;
}