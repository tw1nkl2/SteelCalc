#pragma once
#include "Sheets.h"
class Trykutni : public Sheets
{
	int a;
	int b;
public:
	Trykutni();
	Trykutni(int a, int b);
	~Trykutni();
	void display() const override;
	double calcArea() const override;
	double calcWeight() const override;
};

