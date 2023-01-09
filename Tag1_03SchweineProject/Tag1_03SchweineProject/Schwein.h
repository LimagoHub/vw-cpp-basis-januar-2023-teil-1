#pragma once
#include <ostream>
#include <string>

class Schwein
{
	std::string name;
	int gewicht;

public:	
	// Konstruktor
	Schwein();

	// Destruktor
	~Schwein();


	inline std::string get_name() const
	{
		return name;
	}

	inline void set_name(const std::string& name)
	{
		this->name = name;
	}

	void fressen();

	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
	{
		return os
			<< "name: " << obj.name
			<< " gewicht: " << obj.gewicht;
	}
};
