#pragma once
#include <memory>
#include <iostream>
class Stapel
{
	/*
	 * Goldene Regel wenn es entweder einen ausprogrammierten Destruktor oder einen ausprogrammierten Zuweisungsoperator oder einen CopyCtor gibt müssen alle drei
	 * programmiert werden
	 *
	 * Alternative mit delete abschalten
	 */
private:
	int *data;
	size_t index;
	size_t size;

	void init(const Stapel& other)
	{
		this->size = other.size;
		this->index = other.index;
		data = new int[other.size];

		memcpy(data, other.data, size * sizeof(int));
	}
public:

	Stapel(size_t size = 10);

	

	Stapel(const Stapel &other)  /// Achtung auf genaue Signatur achten
	{
		init(other);
	}

	virtual ~Stapel();

	Stapel& operator=(const Stapel &other)
	{

		std::cout << "operator=" << std::endl;
		delete[] data;
		init(other);
		
		return *this;
	}

	//Stapel& operator=(const Stapel& other) = delete;



	void push(int value);
	int pop();
	bool is_empty();
	bool is_full();
};

