#pragma once
#include <memory>
#include "Calculator.h" // Interface = Contract
class CalcClient
{
private:
	std::unique_ptr<Calculator> calculator_;
public:


	CalcClient(std::unique_ptr<Calculator> calculator)
	{
		calculator_ = std::move(calculator);
	}

	void go()
	{
		
		std::cout << calculator_->add(3, 4) << std::endl;
	}
};

