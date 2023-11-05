#include "Header.h"
#include "Pryamokytni.h"

Pryamokytni::Pryamokytni() : Sheets(), a(0), b(0)
{}

Pryamokytni::Pryamokytni(int a, int b) : Sheets("Pryamokytni", 3, 1), a(a), b(b)
{}

Pryamokytni::~Pryamokytni()
{}

void Pryamokytni::display() const
{
	Sheets::display();
	std::cout << "area" << ":" << calcArea() << std::endl;
	std::cout << "weight" << ":" << calcWeight() << std::endl;
}

double Pryamokytni::calcArea() const
{
	return a * b;
}

double Pryamokytni::calcWeight() const
{
	return  calcArea() * thickness * density;
}
