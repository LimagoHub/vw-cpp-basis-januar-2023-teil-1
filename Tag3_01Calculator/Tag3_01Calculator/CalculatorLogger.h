#pragma once
#include <iostream>
#include "Calculator.h"
class CalculatorLogger:public Calculator
{

	friend class CalculatorFactory;
private:
	std::unique_ptr<Calculator> calculator;
	CalculatorLogger(std::unique_ptr<Calculator> calculator) : calculator(std::move(calculator))// Konstruktor Injection
	{
	}

public:
	


	double add(double a, double b) const override
	{
		std::cout << "Add wurde gerufen" << std::endl;
		return calculator->add(a, b);
	}
	double sub(double a, double b) const override
	{
		return calculator->sub(a, b);
	}
};

