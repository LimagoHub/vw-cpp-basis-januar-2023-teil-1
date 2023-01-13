// Tag5_02Collections.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <deque>
int main()
{

	std::vector<int> intVector;
	intVector.reserve(10);

	std::cout << "Capazitaet: " << intVector.capacity() << std::endl;

	
	for (int i = 0; i < 5; ++i)
	{
		intVector.push_back(i * 10);
	}

	std::cout << "Capazitaet: " << intVector.capacity() << std::endl;
	
	for (auto element : intVector)
		std::cout << element << std::endl;

	for (auto &element : intVector)
		element++;

	for (auto element : intVector)
		std::cout << element << std::endl;

	int letzterWert = intVector.back();

	std::cout << "Capazitaet: " << intVector.capacity() << std::endl;
	std::cout << "Size: " << intVector.size() << std::endl;
	intVector.pop_back();
	std::cout << "Capazitaet: " << intVector.capacity() << std::endl;
	std::cout << "Size: " << intVector.size() << std::endl;
	
	for (auto element : intVector)
		std::cout << element << std::endl;


	std::cout << letzterWert << std::endl;

	std::cout << "--------------------"<< std::endl;

	std::deque<int> intQueue;

	for (int i = 0; i < 5; ++i)
	{
		intQueue.push_front(i * 10);
	}

	for (auto element : intQueue)
		std::cout << element << std::endl;

	
}

