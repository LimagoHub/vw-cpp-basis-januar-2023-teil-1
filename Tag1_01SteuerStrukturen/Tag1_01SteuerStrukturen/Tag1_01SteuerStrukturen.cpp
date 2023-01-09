#include <iostream>

struct zeit
{
	unsigned int stunde;
	unsigned int minute;
	unsigned int sekunde;

};

void unter(zeit y) // in der Regel schlechter Stil, mit const guter stil
{
	std::cout << y.stunde << y.minute << y.sekunde << std::endl;
	
}

void ober()
{
	zeit x = {11, 30,45};
	unter(x);
	
}

double* ausgabe(double* data)
{
	
	data[0] = 10;
	data[1] = 10;
	data[2] = 10;
	return data;
}



// Einsprung in die Verarbeitung
auto main() -> int
{
	
	
	double feld[] = {4.1, 3.14, -2.7};

	double myField[3];
	double *a = ausgabe(myField);
	ober();
	std::cout << a[0] << std::endl;
	//
	//double* ptr;

	//ptr = feld;

	//
	//
	//std::cout << feld[0] << std::endl; //1014 (value of feld) + index * sizeof(type)
	//std::cout << *ptr << std::endl;
	//std::cout << *feld << std::endl;
	//std::cout << ptr[0] << std::endl;

	//std::cout << feld[1] << std::endl; //1014 (value of feld) + index * sizeof(type)
	//std::cout << *(ptr + 1 /*  sizeof(type)*/) << std::endl;
	//std::cout << *(feld + 1) << std::endl;
	//std::cout << ptr[1] << std::endl;


}

