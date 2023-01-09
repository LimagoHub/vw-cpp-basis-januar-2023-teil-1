#include "Schwein.h"
#include <iostream>
Schwein::Schwein()
{
	name = "Nobody";
	gewicht = 10;
}

Schwein::~Schwein()
{
	std::cout << "Quiiiieeeek!" << std::endl;
}

void Schwein::fressen()
{
	gewicht++;
}
