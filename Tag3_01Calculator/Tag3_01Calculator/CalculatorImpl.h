#pragma once
#include "Calculator.h"
class CalculatorImpl:public Calculator
{
public:
	double add(double a, double b) const override
	{
		return a + b;
	}
	double sub(double a, double b) const override
	{
		return a - b;
	}
};

