#pragma once
#include "Calculator.h"
#include <iostream>
class CalculatorSecurity :
    public Calculator
{
private:
	Calculator& calc;

public:
	CalculatorSecurity(Calculator& calc)
		: calc(calc)
	{
	}

	double add(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calc.add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calc.sub(a, b);
	}
};

