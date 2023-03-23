#include<iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int & ref = num;  //12
	int* (&pref) = ptr; //12
	int** (&dpref) = dptr; //12

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;

}