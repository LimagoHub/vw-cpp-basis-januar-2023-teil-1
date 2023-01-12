#pragma once
#include <memory>
#include "Calculator.h"
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalculatorSecurity.h"
class CalculatorFactory
{

private:
	static bool logger;
	static bool secured;
public:

	static bool is_logger()
	{
		return logger;
	}

	static void set_logger(const bool logger)
	{
		CalculatorFactory::logger = logger;
	}


	static bool is_secured() {
		return secured;
	}

	static void set_secured(const bool secured)
	{
		CalculatorFactory::secured = secured;
	}

	static auto createInstance()->std::unique_ptr<Calculator>
	{
		
		std::unique_ptr<Calculator> retval = std::make_unique<CalculatorImpl>();
		if(logger) retval = std::make_unique<CalculatorLogger>(CalculatorLogger{ std::move(retval) });
		if(secured) retval = std::make_unique<CalculatorSecurity>(CalculatorSecurity{ std::move(retval) });
		return retval;
	}
};

