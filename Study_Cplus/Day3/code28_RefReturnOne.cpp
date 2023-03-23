#include <iostream>
using namespace std;

int& RefRetfuncOne(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1; //2
	int& num2 = RefRetfuncOne(num1); //2

	num1++; //3
	num2++;//4 num1 = 4
	cout << "num1 : " << num1 << endl; //4
	cout << "num2 : " << num2 << endl; //4

	return 0;
}