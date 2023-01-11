#pragma once
#include "Calculator.h" // Interface = Contract
class CalcClient
{
private:
	Calculator& calculator;
public:


	CalcClient(Calculator& calculator)
		: calculator(calculator)
	{
	}

	void go()
	{
		
		std::cout << calculator.add(3, 4) << std::endl;
	}
};

