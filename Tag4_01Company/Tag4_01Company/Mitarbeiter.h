#pragma once
#include <string>
class Mitarbeiter
{
	std::string name;


public:


	Mitarbeiter(const std::string& name)
		: name(name)
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

	virtual double get_payout() const = 0;
};

