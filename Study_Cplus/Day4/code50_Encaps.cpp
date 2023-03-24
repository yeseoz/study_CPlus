#include <iostream>
using namespace std;

class SiniveCap // �๰ óġ�� ĸ��
{
public :
	void Take() const 
	{
		cout << "�๰�� �� ~ ���ϴ�" << endl;
	}
};

class SneezeCap //óä�� óġ�� ĸ��
{
public:
	void Take() const
	{
		cout << "��ä�Ⱑ �ܽ��ϴ�." << endl;
	}
};

class SnuffleCap // �ڸ��� ó���� ĸ��
{
public:
	void Take() const
	{
		cout << "�ڰ� �� �ո��ϴ�." << endl;
	}
};

class CONTAC600
{
private:
	SiniveCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap) const
	{
		cap.Take();
	}
};

int main()
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}