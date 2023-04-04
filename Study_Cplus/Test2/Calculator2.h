// author ±è¿¹¼­
#pragma once
#ifndef __CALCULATOR2_H__
#define __CALCULATOR2_H__

class Calculator
{
private:
	double x;
	char cper;
	double y;
public:
	Calculator();
	double Calculate(double x, char cper, double y);
	~Calculator();
};
#endif