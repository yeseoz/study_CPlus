// Å¬·¡½º
#pragma once
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

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