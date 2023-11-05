#pragma once
#include "Sheets.h"
class Pryamokytni : public Sheets
{
	int a;
	int b;
public:
	Pryamokytni();
	Pryamokytni(int a, int b);
	~Pryamokytni();
	void display() const override;
	double calcArea() const override;
	double calcWeight() const override;


};

