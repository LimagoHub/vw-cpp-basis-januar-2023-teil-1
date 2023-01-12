#pragma once
#include <ostream>
#include <string>
class Schwein
{
private:
	std::string name;
	int gewicht;

public:

	Schwein(const std::string& name = "Nobody")
		: name(name), gewicht(10)
	{
	}

	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& name)
	{
		this->name = name;
	}

	int get_gewicht() const
	{
		return gewicht;
	}

	void fressen()
	{
		gewicht++;
	}


	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
	{
		return os
			<< "name: " << obj.name
			<< " gewicht: " << obj.gewicht;
	}
};

