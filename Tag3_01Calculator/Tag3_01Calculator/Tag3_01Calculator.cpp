// Tag3_01Calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Calculator.h"
#include "CalculatorFactory.h"



#include "CalcClient.h"
int main()
{
	CalculatorFactory::set_logger(true);
	CalculatorFactory::set_secured(true);
	
	
	
	CalcClient client{ CalculatorFactory::createInstance() };
	client.go();
}

