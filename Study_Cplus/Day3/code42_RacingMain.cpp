#include "code40_Car.h"
 // main 함수를 구성하는 문장은 클래스 Car와 관련된 것 뿐임 따라서 헤더파일 Car.h 만 포함 하면 된다.
int main()
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}