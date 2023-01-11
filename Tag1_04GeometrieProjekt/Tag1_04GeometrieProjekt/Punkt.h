#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <ostream>

class Punkt
{

	
private:
	
	const double MAX{ 10.0 };
	double x;
	double y;

protected:
	void set_x(double x)
	{
		if (x > MAX ) x = MAX;
		if (x < -MAX) x = -MAX;

		this->x = x;
	}
	void set_y(const double y)
	{
		if (y > MAX || y < -MAX) return;
		this->y = y;
	}

public:
	Punkt(double x = 0.0, double y = 0.0);
	virtual ~Punkt()
	{
		std::cout << "DTOR Punkt" << this << std::endl;
	}
	Punkt& operator *= (double scalar) 
	{
		set_x(get_x() * scalar);
		set_y(get_y() * scalar);
		return *this;
	}

	
	double get_x() const
	{
		return this->x;
	}

	
	double get_y() const
	{
		return this->y;
	}

	
	void rechts(double offset = 1);
	void links();
	void oben();
	void unten();

	virtual std::string to_string() const
	{
		return "X=" + std::to_string(get_x()) + ", Y=" + std::to_string(get_y());
	}


	friend  std::ostream& operator << (std::ostream& os, const Punkt& punkt) 
	{
		os << punkt.to_string();
		return os;
	}


	//friend std::ostream& operator<<(std::ostream& os, const Punkt& obj)
	//{
	//	return os
	//		<< " x: " << obj.x
	//		<< " y: " << obj.y;
	//}

	friend Punkt operator+(const Punkt& a, const Punkt& b)
	{
		return Punkt{ a.get_x() + b.get_x(), a.get_y() + b.get_y() };
	}
};

