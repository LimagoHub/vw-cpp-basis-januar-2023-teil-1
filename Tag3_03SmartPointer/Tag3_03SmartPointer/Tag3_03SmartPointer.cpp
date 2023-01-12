// Tag3_03SmartPointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <memory>


class Foo
{
public:
	Foo()
	{
		std::cout << "CTOR\n";
	}

	virtual ~Foo()
	{
		std::cout << "DTOR\n";
	}

	void bar()
	{
		std::cout << "bar\n";
	}
};

//
//std::unique_ptr<Foo> createFoo() // source
//{
//	std::unique_ptr<Foo> returnValue = std::make_unique<Foo>();
//	return returnValue;
//}
//
//std::unique_ptr<Foo> processor(std::unique_ptr<Foo> value)
//{
//	// Verarbeitung
//	return value;
//}
//
//void sink(std::unique_ptr<Foo> value)
//{
//	value->bar();
//}

std::shared_ptr<Foo> myPtr;
int main()
{
	
	//std::unique_ptr<Foo> myPtr = createFoo();

	//processor(std::move(myPtr));
	//std::cout << "xxxxx\n";
	////sink(std::move(myPtr));
	//std::cout << "fertisch\n";

	myPtr = std::make_shared<Foo>();

	std::cout << myPtr.use_count() << std::endl;
 
	std::shared_ptr<Foo> otherPtr = myPtr;
	std::cout << myPtr.use_count() << std::endl;

	{
		std::shared_ptr<Foo> otherOtherPtr = myPtr;
		std::cout << myPtr.use_count() << std::endl;
	}
	std::cout << myPtr.use_count() << std::endl;
	std::cout << "fertisch\n";
}

