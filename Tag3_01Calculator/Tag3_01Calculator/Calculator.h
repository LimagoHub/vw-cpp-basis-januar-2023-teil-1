#pragma once
#include <iostream>

/*
 * Eine Klasse ist abstract wenn sie wenigstens eine abstrakte Methode hat
 * Abstrakte Klassen können NICHT instanziert werden.
 *
 * Ein Interface ist ein rein Abstrakte Klasse, d.h. sie hat nur abstrakte Methoden
 */

class Calculator // Interface
{
public:
	virtual double add(double a, double b) const = 0;

	virtual double sub(double a, double b) const = 0;
};



