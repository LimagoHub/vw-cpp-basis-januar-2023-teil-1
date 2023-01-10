#include "Schwein.h"
#include <iostream>
Schwein::Schwein()
{
	name = "Nobody";
	gewicht = 10;
	Schwein::counter++;
}

Schwein::~Schwein()
{
	std::cout << "Quiiiieeeek!" << std::endl;
	Schwein::counter--;
}

void Schwein::fressen()
{
	gewicht++;
}
int Schwein::counter = 0;