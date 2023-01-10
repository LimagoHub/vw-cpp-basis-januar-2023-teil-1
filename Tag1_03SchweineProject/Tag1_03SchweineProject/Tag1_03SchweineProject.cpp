#include <iostream>
#include <string>
#include "Schwein.h"




int main()
{
	
	std::cout << Schwein::get_counter() << std::endl;
	
	Schwein piggy; // Piggy ist die Instanz == Object

	std::cout << Schwein::get_counter() << std::endl;
	{
		Schwein babe;
		std::cout << Schwein::get_counter() << std::endl;
	}
	std::cout << Schwein::get_counter() << std::endl;

	
	piggy.set_name("Miss Piggy");
	

	std::cout << piggy << std::endl;
	piggy.fressen(); 
	std::cout << piggy << std::endl;
}


