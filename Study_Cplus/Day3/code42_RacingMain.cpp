#include "code40_Car.h"
 // main �Լ��� �����ϴ� ������ Ŭ���� Car�� ���õ� �� ���� ���� ������� Car.h �� ���� �ϸ� �ȴ�.
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