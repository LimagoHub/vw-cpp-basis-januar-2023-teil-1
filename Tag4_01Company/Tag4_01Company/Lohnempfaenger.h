#pragma once
#include "Mitarbeiter.h"
class Lohnempfaenger :
    public Mitarbeiter
{
	double arbeitszeit;
	double stundenlohn;
	
public:
	Lohnempfaenger(const std::string& name): Mitarbeiter(name),stundenlohn(16.0),arbeitszeit(40)
	{
	}

	double get_payout() const override
	{
		return arbeitszeit * stundenlohn;
	}
};

