#include "Header.h"
#include "Sheets.h"

Sheets::Sheets() : type("-"), thickness(0), density(0)
{}

Sheets::Sheets(std::string type, int thickness, int density) : type(type), thickness(thickness), density(density)
{}

Sheets::~Sheets()
{}

void Sheets::display() const
{
	std::cout << "\n> List type - " << type << ":" << std::endl;
}
