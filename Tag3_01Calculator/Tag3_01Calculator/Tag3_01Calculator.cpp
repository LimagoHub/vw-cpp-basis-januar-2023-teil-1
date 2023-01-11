// Tag3_01Calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "CalculatorSecurity.h"
#include "CalculatorLogger.h"
#include "CalculatorImpl.h"


#include "CalcClient.h"
int main()
{
	CalculatorImpl calc;
	CalculatorLogger logger{calc};
	CalculatorSecurity security{ logger };
	CalcClient client{security};
	client.go();
}

