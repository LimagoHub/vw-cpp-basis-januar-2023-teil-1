#pragma once
#include <iostream>
#include "Calculator.h"
class CalculatorLogger:public Calculator
{
private:
	Calculator& calc;


public:
	CalculatorLogger(Calculator& calc)
		: calc(calc)
	{
	}


	double add(double a, double b) const override
	{
		std::cout << "Add wurde gerufen" << std::endl;
		return calc.add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calc.sub(a, b);
	}
};

