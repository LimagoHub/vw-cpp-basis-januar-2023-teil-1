#pragma once
#include "Calculator.h"
#include <iostream>
class CalculatorSecurity :
    public Calculator
{
private:
	std::unique_ptr<Calculator> calculator;

public:
	CalculatorSecurity(std::unique_ptr<Calculator> calculator)
		: calculator(std::move(calculator))
	{
	}

	double add(double a, double b) const override
	{
		std::cout << "Du kommst hier rein" << std::endl;
		return calculator->add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calculator->sub(a, b);
	}
};

