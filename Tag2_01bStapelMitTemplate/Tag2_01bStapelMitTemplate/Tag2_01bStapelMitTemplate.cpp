// Tag2_01bStapelMitTemplate.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Stapel.h"

template<class T>
T max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 10;
	int b = 100;

	int c = max(a, b);

	double x = 10.0;
	double y = 100.0;

	double z = max<double>(x, a);
	
    Stapel<int, 10> intStapel;
	Stapel<double, 20> doubleStapel;
}

