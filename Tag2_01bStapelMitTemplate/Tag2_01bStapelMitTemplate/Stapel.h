#pragma once
template<class T, size_t SIZE>
class Stapel
{
private:
	T data[SIZE];
	size_t index;


public:
	Stapel():index{0}
	{
	}

	void push(T value)
	{
		if (is_full()) return;
		data[index++] = value;
	}

	T pop()
	{
		if (is_empty()) return T{};
		return data[--index];
	}

	bool is_full()
	{
		return index == SIZE;
	}

	bool is_empty()
	{
		return index == 0;
	}
	
};

