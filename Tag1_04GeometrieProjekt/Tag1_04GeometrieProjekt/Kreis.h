#pragma once
#include "Punkt.h"
class Kreis: public Punkt
{
private:
	double radius;


public:


	Kreis():Kreis(0,0,0)
	{
		
	}

	Kreis(double radius):Kreis(0,0,radius)
	{

	}

	Kreis(double x, double y):Kreis(x,y,0)
	{

	}

	Kreis( double radius, double x, double y):Punkt(x,y),radius(radius)
	{

	}



	double get_radius() const
	{
		return radius;
	}

	void set_radius(const double radius)
	{
		this->radius = radius;
	}

	friend std::ostream& operator<<(std::ostream &os, const Kreis& kreis)
	{
		return os << kreis.to_string() << ", Radius=" << kreis.get_radius();
	}
};

