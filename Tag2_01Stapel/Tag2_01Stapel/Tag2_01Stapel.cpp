// Tag2_01Stapel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Stapel.h"

int main()
{
    size_t my_size = 10;
    Stapel myStapel{ my_size }; // Aufruf des numerischen CTOR

    Stapel zwei= myStapel ;

    //zwei = myStapel;

    for (int i = 0; i < 10; ++i)
    {
        if (!myStapel.is_full())
            myStapel.push(i);
    	
    }

    while (!myStapel.is_empty())
        std::cout << myStapel.pop() << std::endl;



}


