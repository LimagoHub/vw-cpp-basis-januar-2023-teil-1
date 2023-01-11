#include <iostream>
#include "Stapel.h"

Stapel::Stapel(size_t size) :data{ new int[size] }, size{ size }, index{ 0 }
{
	// NOP
}

Stapel::~Stapel()
{
	delete[] data;
	
}

void Stapel::push(int value)
{
	if (is_full()) return;
	data[index++] = value;
}

int Stapel::pop()
{
	if (is_empty()) return 0;
	return data[--index];
}

bool Stapel::is_empty()
{
	
	return index == 0;
}

bool Stapel::is_full()
{
	
	return index == size;
}

