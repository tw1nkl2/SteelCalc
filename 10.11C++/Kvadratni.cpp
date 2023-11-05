#include "Header.h"
#include "Kvadratni.h"

Kvadratni::Kvadratni() : Sheets(), param(0)
{}

Kvadratni::Kvadratni(int param) : Sheets("Kvadratniy", 3, 1), param(param)
{}

Kvadratni::~Kvadratni()
{}

void Kvadratni::display() const
{
	Sheets::display();
	std::cout << "area" << ":" << calcArea() << std::endl;
	std::cout << "weight" << ":" << calcWeight() << std::endl;
}

double Kvadratni::calcArea() const
{
	return param * param;
}

double Kvadratni::calcWeight() const
{
	return calcArea() * thickness * density;
}
