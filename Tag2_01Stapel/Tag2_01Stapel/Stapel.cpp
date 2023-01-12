#include <iostream>
#include "Stapel.h"

Stapel::Stapel(size_t size) :data{ new int[size] }, size{ size }, index{ 0 }
{
	// try
	// {
	// 	/// IO-exception
	// } catch (const std::exception & ex)
	// {
	// 	throw StapelException{ ex};
	// }
}

Stapel::~Stapel()
{
	if(data)
		delete[] data;
	
}

void Stapel::push(int value)
{
	if (is_full()) throw StapelException{"Overflow"};
	data[index++] = value;
}

int Stapel::pop()
{
	if (is_empty()) throw StapelException{ "Underflow" };
	return data[--index];
}

bool Stapel::is_empty() const noexcept
{
	
	return index == 0;
}

bool Stapel::is_full()const noexcept
{
	
	return index == size;
}

