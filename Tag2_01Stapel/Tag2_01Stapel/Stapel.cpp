#include <iostream>
#include "Stapel.h"

Stapel::Stapel()
{
	std::cout << "CTOR" << std::endl;
}

void Stapel::push(int value)
{
	std::cout << "Push" << std::endl;
}

int Stapel::pop()
{
	std::cout << "pop" << std::endl;
	return 0;
}

bool Stapel::is_empty()
{
	std::cout << "is_empty" << std::endl;
	return true;
}

bool Stapel::is_full()
{
	std::cout << "is_full" << std::endl;
	return true;
}

