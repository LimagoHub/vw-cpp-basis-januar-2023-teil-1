#pragma once
#include <stdexcept>
template<class T, size_t SIZE>
class MyArray
{
private:
	T data[SIZE];

public:
	T& operator[](const size_t index)
	{
		if (index >= SIZE) throw std::out_of_range("index out of range");
		return data[index];
	}

	
};