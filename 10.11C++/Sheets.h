#pragma once 
class Sheets
{
protected:
	std::string type;
	int thickness;
	int density;
public:
	Sheets();
	Sheets(std::string type, int thickness, int density);
	~Sheets();
	virtual void display() const;
	virtual double calcArea() const = 0;
	virtual double calcWeight() const = 0;
};

