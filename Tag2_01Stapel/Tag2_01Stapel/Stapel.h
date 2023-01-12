#pragma once
#include <memory>
#include <iostream>
#include <stdexcept>

class StapelException : public std::exception
{
private:
	int errorcode;
	
public:
	StapelException()
	{
	}

	StapelException(char const* _Message)
		: exception(_Message)
	{
	}

	StapelException(char const* _Message, int i)
		: exception(_Message, i)
	{
	}

	StapelException(exception const& _Other)
		: exception(_Other)
	{
	}
};

class Stapel
{
	/*
	 * Goldene Regel wenn es entweder einen ausprogrammierten Destruktor oder einen ausprogrammierten Zuweisungsoperator oder einen CopyCtor gibt müssen alle drei
	 * programmiert werden
	 * 
	 * erweiterte Goldene Regel + Move Construktor + Move Zuweisung
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

	Stapel(Stapel &&other) // Moveconstruktor
	{
		data = other.data;
		size = other.size;
		index = other.index;
		
		other.data = nullptr;
		other.size = 0;
		other.index = 0;
		
	}


	virtual ~Stapel();

	Stapel& operator=(const Stapel &other)
	{

		std::cout << "operator=" << std::endl;
		delete[] data;
		init(other);
		
		return *this;
	}
	Stapel& operator=( Stapel&& other)
	{
		if(data)
			delete data;
		data = other.data;
		size = other.size;
		index = other.index;

		other.data = nullptr;
		other.size = 0;
		other.index = 0;

		return *this;
	}

	//Stapel& operator=(const Stapel& other) = delete;



	void push(int value);
	int pop();
	bool is_empty() const noexcept;
	bool is_full() const noexcept;
};

