#include <iostream>
#pragma warning(disable:4996)

// 클래스 멤버변수에 접근할 수 있는 방법은  3가지로 표현된다
class Myclass {
	//멤버변수 : 속성
private:
	char id;
	int age;
	char name[10];
	//멤버 함수 (=메소드): 기능
public:
	/*void set(char aid, int aage, const char* aname);*/
	void get();
	Myclass(char aid, int aage, const char* aname);
};

void Myclass::get()
{
	printf("id : %c\n나이 : %d\n이름 : %s", id, age, name);
}

//void Myclass::set(char aid, int aage, const char* aname)
//{
//	id = aid;
//	age = aage;
//	strcpy(name, aname);
//}

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) // 생성자 호출될때 실행됨
{
	strcpy(name, aname);
}

int main()
{
	//Myclass per;
	//per.set(1, 20, "홍길동"); // 이름이 바뀌면 안되니까 상수화 시켜줘라 => const
	//per.get();

	Myclass me('4', 48, "길동");
	me.get();

	return 0;

}