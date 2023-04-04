// author ±è¿¹¼­
#include<iostream>
#include "Calculator.h"
using namespace std;

Calculator::Calculator()
{
	this->x = 0;
	this->cper = NULL;
	this->y = 0;
}

double Calculator::Calculate(double x, char cper, double y)
{
	this->x = x;
	this->cper = cper;
	this->y = y;
	double result;

	if (cper == '+')
	{
		result = x + y;
		cout << "= " << result << endl << endl;
		return result;
	}

	else if (cper == '-')
	{
		result = x - y;
		cout << "= " << result << endl << endl;
		return result;
	}

	else if (cper == '*')
	{
		result = x * y;
		cout << "= " << result << endl << endl;
		return result;
	}

	else if (cper == '/')
	{
		try {
			if (y == 0) throw y;
			result = x / y;
			cout << "= " << result << endl << endl;
			return result;
		}
		catch (double y)
		{
			cout << "ERROR" << endl << endl;
		}
	}

	else
	{
		cin.clear();
		cin.ignore(100,'\n');
	}
}

Calculator::~Calculator()
{ }
