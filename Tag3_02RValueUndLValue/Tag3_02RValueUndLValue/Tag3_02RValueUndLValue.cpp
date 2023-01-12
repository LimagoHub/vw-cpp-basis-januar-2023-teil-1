// Tag3_02RValueUndLValue.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>


int main()
{
	
	std::string a = "Hallo";

	std::string b{ std::move(a) };

	std::cout << "cheese a " << a << std::endl;
	std::cout << "cheese b " << b << std::endl;
   
}


