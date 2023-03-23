#include <iostream>
using namespace std;

int RefRetfuncTwo(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1; //2
	int num2 = RefRetfuncTwo(num1);//2

	num1 += 1; //3
	num2 += 100; //102
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	return 0;
}