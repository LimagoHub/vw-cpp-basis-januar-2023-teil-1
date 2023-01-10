#include "Schwein.h"
#include <iostream>



Schwein::Schwein(std::string name)
{
	set_name(name);
	set_gewicht(10);
	Schwein::counter++;
}

Schwein::~Schwein()
{
	std::cout << "Quiiiieeeek!" << std::endl;
	Schwein::counter--;
}

void Schwein::fressen()
{
	set_gewicht(get_gewicht() + 1);
}
int Schwein::counter = 0;