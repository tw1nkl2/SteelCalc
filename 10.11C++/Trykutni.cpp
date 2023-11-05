#include "Header.h"
#include "Trykutni.h"

Trykutni::Trykutni() : Sheets(), a(0), b(0)
{}

Trykutni::Trykutni(int a, int b) : Sheets("Trykutni", 3, 1), a(a), b(b)
{}

Trykutni::~Trykutni() 
{}

void Trykutni::display() const
{
	Sheets::display();
	std::cout << "area" << ":" << calcArea() << std::endl;
	std::cout << "weight" << ":" << calcWeight() << std::endl;
}

double Trykutni::calcArea() const
{
	return (1.0 / 2.0) * a * b;
}

double Trykutni::calcWeight() const
{
	return calcArea() * thickness * density;
}
