#include <iostream>
#include <string>
#include "Schwein.h"



int main()
{
	
	Schwein piggy;

	piggy.set_name("Miss Piggy");
	

	std::cout << piggy << std::endl;
	piggy.fressen(); 
	std::cout << piggy << std::endl;
}


