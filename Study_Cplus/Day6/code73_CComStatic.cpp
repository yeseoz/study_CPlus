#include<iostream>
using namespace std;

void static_Counter()
{
	static int cnt;
	cnt++;
	cout << "static_Current cnt : " << cnt << endl;
}

void Counter()
{
	int cnt=0;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}
int main()
{
	for (int i = 0; i < 10;i++)
	{
		static_Counter();
		Counter();
	}
	return 0;
}