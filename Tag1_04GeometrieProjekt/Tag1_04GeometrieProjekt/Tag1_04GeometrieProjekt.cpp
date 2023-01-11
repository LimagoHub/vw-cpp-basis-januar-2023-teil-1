// Tag1_04GeometrieProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
class Foo
{
	
};
#include <iostream>
#include "Kreis.h"
int main()
{

	
	////Punkt* p; // Adresse undefiniert
	////Kreis* k;

	////p = new Punkt{}; // Adresse auf initialisiertes Objekt
	////
	////k = p; // Laufzeit (compiler ist im Urlaub)

	//Punkt* p; // Adresse undefiniert
	//Kreis* k;

	//k = new Kreis{}; // 2000

	////p = new Punkt{}; // 1000


	//Punkt *myRef;

	//// myRef = 1000
	////myRef = p;
	////std::cout << *myRef << std::endl; // nicht polymorph


	//// myRef 2000
	//myRef = k;
	//std::cout << *myRef << std::endl; // polymorph
	//
	//delete myRef;
	//Kreis k;
	//Punkt& p = k;// alias

	//std::cout << p << std::endl;

	Kreis* k;
	Punkt* p = new Kreis();

	k = (Kreis*)p; // Nicht mehr verwenden
	
	k = static_cast<Kreis*>(p);
	std::cout << *k << std::endl;

	double x = 10.0;
	int a = static_cast<int>(x);
	
	k = reinterpret_cast<Kreis*>(p);
	std::cout << *k << std::endl;

	
	k = dynamic_cast<Kreis*>(p);
	std::cout << *k << std::endl;
}

