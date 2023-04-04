#include<iostream>

#include "Calculator.h"
using namespace std;
int main()
{
	cout<< "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;

	int x, y;
	char c;
	Calculator cal;
	
	while(1)
	{
		cout << "input >> " << endl;
		cin >> x >> c >> y;
		cal.Calculate(x, c, y);
	}

	return 0;
}
