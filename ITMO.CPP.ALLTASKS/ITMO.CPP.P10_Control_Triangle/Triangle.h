#pragma once
#include "Dot.h"


Dot d1;
Dot d2;
Dot d3;

class Triangle
{
private:


public:

	Triangle(Dot& d1, Dot& d2, Dot& d3);
	~Triangle();

	double Show(Dot& d1, Dot& d2, Dot& d3);
	double Perimeter();
	double Area();
};