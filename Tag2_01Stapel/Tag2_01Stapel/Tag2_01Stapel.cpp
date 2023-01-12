// Tag2_01Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Stapel.h"

void foo()
{
	//try
	//{
		size_t my_size = 10;
		Stapel myStapel{ my_size }; // Aufruf des numerischen CTOR

    

		//zwei = myStapel;

		for (int i = 0; i < 10; ++i)
		{
			if (!myStapel.is_full())
				myStapel.push(i);
    	
		}

		/*Stapel zwei{ std::move(myStapel) };
		zwei = std::move(myStapel);
	*/
		while (!myStapel.is_empty())
			std::cout << myStapel.pop() << std::endl;

		std::cout << myStapel.pop() << std::endl;

	/*catch (const StapelException &ex) 
	{
		std::cout << ex.what() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}*/
}

int main()
{
	try {
		foo();
	} catch(...)
	{
		for(int i = 0; i < 100; ++i)
			std::cout << "Alarm" << std::endl;
	}
}


