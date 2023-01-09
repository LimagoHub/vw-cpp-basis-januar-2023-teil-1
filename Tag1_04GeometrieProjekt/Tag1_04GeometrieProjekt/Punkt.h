#pragma once
#include <string>
class Punkt
{
private:
	const double MAX = 10.0;
	double x;
	double y;

	void set_x(const double x)
	{
		if (x > MAX || x < -MAX) return;
		this->x = x;
	}
	void set_y(const double y)
	{
		if (y > MAX || y < -MAX) return;
		this->y = y;
	}

public:
	Punkt();

	double get_x() const
	{
		return this->x;
	}

	
	double get_y() const
	{
		return this->y;
	}

	void rechts();
	void links();
	void oben();
	void unten();

	inline std::string to_string()
	{
		return "X=" + std::to_string(get_x()) + ", Y=" + std::to_string(get_y());
	}
};

