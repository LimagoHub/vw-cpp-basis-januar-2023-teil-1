#include <iostream>
#include <string>
#include "Schwein.h"



int main()
{

	
	Schwein piggy; // Piggy ist die Instanz == Object


	
	piggy.set_name("Miss Piggy");

	Schwein babe = piggy++;

	std::cout << babe << std::endl;
	
}


