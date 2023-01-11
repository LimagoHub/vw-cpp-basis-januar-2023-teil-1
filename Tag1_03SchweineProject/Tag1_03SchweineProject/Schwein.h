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


	// Preincrement
	Schwein operator ++()
	{
		fressen();
		return *this;
	}

	// Postincrement
	Schwein operator ++(int dummy)
	{
		Schwein oldValue = *this;
		fressen();
		return oldValue;
	}

	int get_gewicht() const
	{
		return gewicht;
	}

	// wegen Goldener Regel....
	Schwein& operator=(const Schwein& other) = default;

	// Konstruktor (Initialisiert)
	Schwein(std::string name = "Nobody");

	Schwein(const Schwein& other);

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

	friend bool operator==(const Schwein& lhs, const Schwein& rhs)
	{
		return lhs.name == rhs.name
			&& lhs.gewicht == rhs.gewicht;
	}

	friend bool operator!=(const Schwein& lhs, const Schwein& rhs)
	{
		return !(lhs == rhs);
	}

	friend std::ostream& operator<<(std::ostream& os, const Schwein& obj) 
	{
		return os
			<< "name: " << obj.get_name()
			<< " gewicht: " << obj.gewicht;
	}
};
