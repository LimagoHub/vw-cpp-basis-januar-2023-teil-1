// Tag4_02Exceptions.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdexcept>
class Demo
{
public:

	void processEvenValues(int eventValue)
	{
		if (eventValue % 2 == 0)
			std::cout << "Hallo" << std::endl;
		else
			throw std::invalid_argument("Odd ist nicht erlaubt");
	}
};


void bar() noexcept
{
	
}

void foo() 
{
	throw std::exception{ "Ein fehler ist aufgetreten." };
	std::cout << "Vielen Dank, Sie haben ein kleines Unterprogramm echt gluecklich gemacht!" << std::endl;

}

int main()
{
	try
	{
		Demo  demo;

		//foo();
		demo.processEvenValues(3);
		

		
	}
	catch (const std::invalid_argument& ex)
	{
		std::cout << "Invalid Argument " << ex.what() << std::endl;
	}
	catch (const std::exception &ex)
	{
		std::cout << "other cheese " << ex.what() << std::endl;
	}
	std::cout << "Vielen Dank, Sie haben ein kleines Programm echt gluecklich gemacht!" << std::endl;
	
}

