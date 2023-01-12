// Tag4_01Company.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Gehaltsempfaenger.h"
#include "Lohnempfaenger.h"
int main()
{
	Mitarbeiter* feld[] = { new Lohnempfaenger{"Hinz"},new Lohnempfaenger{"Hinz"} , new Gehaltsempfaenger{"Mayer"}, new Gehaltsempfaenger{"Mueller"}, new Gehaltsempfaenger{"Schmitt"} };

	for (int i = 0; i < 5; ++i)
	{
		std::cout << feld[i]->get_payout() << std::endl;
	}
	
	
    std::cout << "Hello World!\n";
}

