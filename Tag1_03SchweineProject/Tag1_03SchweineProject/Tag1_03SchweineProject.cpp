#include <iostream>
#include <string>
#include "Schwein.h"



int main()
{

	
	Schwein piggy; // Piggy ist die Instanz == Object

	std::cout << Schwein::get_counter() << std::endl;

	// Schwein babe =  piggy ; ACHTUNG keine Zuweisung sondern CopyCtor
	Schwein babe{ piggy };
	std::cout << Schwein::get_counter() << std::endl;


	// Zuweisung
	Schwein freddy;
	freddy = piggy;
	std::cout << Schwein::get_counter() << std::endl;
}


