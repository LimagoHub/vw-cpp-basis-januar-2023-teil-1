#pragma once
#include "Mitarbeiter.h"
class Gehaltsempfaenger :
    public Mitarbeiter
{

	double gehalt;
public:
	Gehaltsempfaenger(const std::string& name)
		: Mitarbeiter(name), gehalt(3000)
	{
	}

	double get_payout()  const override
	{
		return gehalt;
	}
};

