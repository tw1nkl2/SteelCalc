#pragma once
#include "Sheets.h"
class Kvadratni : public Sheets
{
	int param;
public:
	Kvadratni();
	Kvadratni(int param);
	~Kvadratni();
	void display() const override;
	double calcArea() const override;
	double calcWeight() const override;
};

