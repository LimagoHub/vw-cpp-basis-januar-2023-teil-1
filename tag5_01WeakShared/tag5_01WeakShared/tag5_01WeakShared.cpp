// tag5_01WeakShared.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>
struct Foo
{
	Foo()
	{
		std::cout << "CTOR" << std::endl;
	}

	void bar()
	{
		std::cout << "bar" << std::endl;
	}

	~Foo()
	{
		std::cout << "DTOR" << std::endl;
	}
};

std::weak_ptr<Foo> other;
int main()
{
	std::cout << "PROGRAMMSTART" << std::endl;
	
	
	
   /* {
		std::shared_ptr<Foo> myPtr = std::make_shared<Foo>();
		other = myPtr;
    }*/
	
	std::shared_ptr<Foo> demo = other.lock();
	demo->bar();
	//else
	//	std::cout << "Pointer ungueltig" << std::endl;
	
	std::cout << "PROGRAMMENDE" << std::endl;
}

