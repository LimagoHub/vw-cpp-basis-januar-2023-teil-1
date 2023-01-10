#pragma once
class Stapel
{
public:

	Stapel();

	void push(int value);
	int pop();
	bool is_empty();
	bool is_full();
};

