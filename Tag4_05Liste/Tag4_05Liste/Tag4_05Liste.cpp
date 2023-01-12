// Tag4_05Liste.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Client.h"
#include "ListImpl.h"

using namespace  vw::collections;
int main()
{
	ListImpl<Schwein*> liste;
	Client c{ liste };
	c.run();

	return 0;
 }

