// Tag1_04GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
int main()
{
    Punkt p{3.0, -7.0};
	std::cout << p.to_string() << std::endl;

    
	
    for (int i = 0; i < 12; ++i)
    {
        p.rechts(1.5);
        std::cout << p.to_string() << std::endl;
    }
}

