#pragma once
#include <ostream>
#include <string>
#include <stdexcept>
class Schwein
{
private:
	std::string name;
	int gewicht;
	static int counter;

	void set_gewicht(const int gewicht)
	{
		if(gewicht < 10)
			throw std::invalid_argument("Gewicht ist ungeltig");
		this->gewicht = gewicht;
	}

public:


	int get_gewicht() const
	{
		return gewicht;
	}

	// Konstruktor (Initialisiert)
	Schwein(std::string name = "Nobody");

	// Destruktor (Clean up)
	~Schwein();

	static int get_counter()
	{
		return counter;
	}
	

	inline std::string get_name() const
	{
		return name;
	}

	inline void set_name(const std::string &name)
	{
		if (name == "Elsa")
			throw std::invalid_argument("Name is not valid");
		this->name = name;
	}

	void fressen();

	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj) 
	{
		return os
			<< "name: " << obj.get_name()
			<< " gewicht: " << obj.gewicht;
	}
};
