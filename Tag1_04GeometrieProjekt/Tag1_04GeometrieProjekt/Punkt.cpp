#include "Punkt.h"

Punkt::Punkt():x(0),y(0)
{
}

void Punkt::rechts()
{
	set_x(get_x() + 1);
}

void Punkt::links()
{
	set_x(get_x() - 1);
}

void Punkt::oben()
{
	set_y(get_y() + 1);
}

void Punkt::unten()
{
	set_y(get_y() - 1);
}
