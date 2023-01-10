#pragma once
class Stapel
{
private:
	int data[10];
	size_t index;

public:

	Stapel();

	void push(int value);
	int pop();
	bool is_empty();
	bool is_full();
};

