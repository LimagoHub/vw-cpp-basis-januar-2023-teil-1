// Tag1_04GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
int main()
{
    Punkt p{3.0, -7.0};
	Punkt q{ 1,1 };


	Punkt x = p + q;

	std::cout << x << std::endl;
}

