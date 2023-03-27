#include<iostream>
using namespace std;
class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)
	{
		cout << "create obj : " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};
int main()
{
	Temporary(100); // 타입 또는 이름 이있어야 하는데 얘는 이름이 없다.. => 임시 객체 (다음줄에서 사용 못함)
	cout << "******* after make!" << endl<<endl;

	Temporary(200).ShowTempInfo();
	cout << "******* after make!" << endl << endl;

	const Temporary& ref = Temporary(300); // 임시객체를 참조 하고 있음 => 저장 하고 있음
	cout << "******* end of main!" << endl << endl;
	return 0;
}