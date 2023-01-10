#include "Punkt.h"

Punkt::Punkt(double x, double y)
{
	set_x(x);
	set_y(y);
}


void Punkt::rechts(double offset)
{
	set_x(get_x() + offset);
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
