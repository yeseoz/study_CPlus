#include <iostream>
#pragma warning(disable:4996)
using namespace std;
class Human
{
private:
	char* name; // ==> 힙에 할당됨
	int id;
	int age; // 객체 생성하면 스택에 다 할당됨
public:
	Human(const char *aname, int aid, int aage)
	{
		name = new char[strlen(aname) + 1]; // 마지막에 들어오는 Null 값 때문에 +1
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() // 소멸자 ==> 객체를 소멸함
	{
		delete [] name; // delete [] 위치!
	}

	/*void setData(const char aname[20], int aid, int aage) // 생성자가 만들어져서 굳이 setData 필요 없음
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

	Human hary[3] = { Human("김영희", 2, 23), Human("김철수", 3, 49), Human("이길동", 4, 30) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();
	return 0;
}