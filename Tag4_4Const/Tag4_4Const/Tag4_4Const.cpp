// Tag4_4Const.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
class xxx{
	int  x;
const char* foo(const char* const ptr) const
{
	
	return ptr;
}

void bar(const xxx &a) const
{
		this->foo("xxx");
}
	
}


int main()
{
	char feld[] = { 65,66,67,68 };
	char erdbeerfeld[] = { 65,66,67,68 };
	char*  p = feld;

	foo(p);

}

